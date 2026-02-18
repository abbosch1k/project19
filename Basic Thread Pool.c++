#include <iostream>
#include <thread>
#include <vector>
#include <queue>
#include <mutex>
using namespace std;

queue<int> tasks;
mutex m;

void worker(){
    while(true){
        m.lock();
        if(tasks.empty()){ m.unlock(); break; }
        int t=tasks.front(); tasks.pop();
        m.unlock();
        cout<<"Task "<<t<<"\n";
    }
}

int main(){
    for(int i=0;i<5;i++) tasks.push(i);

    vector<thread> pool;
    for(int i=0;i<2;i++)
        pool.emplace_back(worker);

    for(auto& t:pool) t.join();
}

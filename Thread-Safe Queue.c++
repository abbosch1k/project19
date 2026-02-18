#include <iostream>
#include <queue>
#include <mutex>
using namespace std;

template<typename T>
class SafeQueue{
    queue<T> q;
    mutex m;
public:
    void push(T v){
        lock_guard<mutex> lock(m);
        q.push(v);
    }
    T pop(){
        lock_guard<mutex> lock(m);
        T v=q.front();
        q.pop();
        return v;
    }
};

int main(){
    SafeQueue<int> q;
    q.push(5);
    cout<<q.pop();
}

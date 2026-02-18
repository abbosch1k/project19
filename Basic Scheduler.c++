#include <iostream>
#include <thread>
using namespace std;

void task(){ cout<<"Run\n"; }

int main(){
    this_thread::sleep_for(chrono::seconds(1));
    task();
}

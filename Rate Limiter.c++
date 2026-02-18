#include <iostream>
#include <chrono>
using namespace std;

int main(){
    auto last=chrono::steady_clock::now();
    auto now=chrono::steady_clock::now();
    if(now-last>chrono::seconds(1))
        cout<<"Allowed";
}

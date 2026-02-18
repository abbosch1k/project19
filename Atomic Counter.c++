#include <iostream>
#include <atomic>
using namespace std;

int main(){
    atomic<int> counter{0};
    counter++;
    cout<<counter;
}

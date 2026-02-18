#include <iostream>
#include <chrono>
using namespace std;

class Stopwatch{
    chrono::steady_clock::time_point start;
public:
    void begin(){ start=chrono::steady_clock::now(); }
    long long end(){
        auto e=chrono::steady_clock::now();
        return chrono::duration_cast<chrono::milliseconds>(e-start).count();
    }
};

int main(){
    Stopwatch sw;
    sw.begin();
    for(int i=0;i<1000000;i++);
    cout<<sw.end()<<" ms";
}

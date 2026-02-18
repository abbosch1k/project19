#include <iostream>
#include <functional>
using namespace std;

class ScopeGuard{
    function<void()> f;
public:
    ScopeGuard(function<void()> fn):f(fn){}
    ~ScopeGuard(){ f(); }
};

int main(){
    ScopeGuard g([](){ cout<<"Exit\n"; });
}

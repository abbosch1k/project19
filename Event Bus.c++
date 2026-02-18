#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class EventBus{
    vector<function<void()>> subs;
public:
    void subscribe(function<void()> f){ subs.push_back(f); }
    void publish(){ for(auto& f:subs) f(); }
};

int main(){
    EventBus bus;
    bus.subscribe([](){ cout<<"Event\n"; });
    bus.publish();
}

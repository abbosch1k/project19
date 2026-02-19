#include <iostream>
#include <coroutine>
using namespace std;

struct Task{
    struct promise_type{
        Task get_return_object(){ return {}; }
        suspend_never initial_suspend(){ return {}; }
        suspend_never final_suspend() noexcept{ return {}; }
        void return_void(){}
        void unhandled_exception(){}
    };
};

Task run(){
    cout<<"Coroutine running\n";
    co_return;
}

int main(){
    run();
}

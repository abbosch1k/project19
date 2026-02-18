#include <iostream>
using namespace std;

template<typename T>
class SimpleAllocator {
public:
    T* allocate(size_t n){
        return static_cast<T*>(::operator new(n*sizeof(T)));
    }
    void deallocate(T* p){
        ::operator delete(p);
    }
};

int main(){
    SimpleAllocator<int> a;
    int* p=a.allocate(1);
    *p=42;
    cout<<*p;
    a.deallocate(p);
}

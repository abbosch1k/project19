#include <iostream>
using namespace std;

class MyVector{
    int* data;
    int size;
public:
    MyVector(int s):size(s){ data=new int[s]; }
    ~MyVector(){ delete[] data; }
    int& operator[](int i){ return data[i]; }
};

int main(){
    MyVector v(3);
    v[0]=10;
    cout<<v[0];
}

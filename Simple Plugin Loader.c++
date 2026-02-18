#include <iostream>
using namespace std;

void plugin(){ cout<<"Plugin loaded\n"; }

int main(){
    void (*p)() = plugin;
    p();
}

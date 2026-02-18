#include <iostream>
using namespace std;

enum State{Idle,Working,Finished};

int main(){
    State s=Idle;

    s=Working;
    cout<<"Working\n";

    s=Finished;
    cout<<"Finished\n";
}

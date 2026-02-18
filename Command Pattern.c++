#include <iostream>
using namespace std;

class Command{
public:
    virtual void execute()=0;
};

class Print: public Command{
public:
    void execute(){ cout<<"Run\n"; }
};

int main(){
    Print cmd;
    cmd.execute();
}

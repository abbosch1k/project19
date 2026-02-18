#include <iostream>
using namespace std;

enum Level{INFO,ERROR};

void log(Level l,string msg){
    if(l==INFO) cout<<"[INFO] ";
    else cout<<"[ERROR] ";
    cout<<msg<<"\n";
}

int main(){
    log(INFO,"Started");
}

#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string line="host=localhost";
    string key,value;

    stringstream ss(line);
    getline(ss,key,'=');
    getline(ss,value);

    cout<<key<<" -> "<<value;
}

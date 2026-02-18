#include <iostream>
using namespace std;

struct User{
    string name;
    int age;
};

int main(){
    User u{"Bob",30};
    cout<<"{\"name\":\""<<u.name<<"\",\"age\":"<<u.age<<"}";
}

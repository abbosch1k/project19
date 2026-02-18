#include <fstream>
using namespace std;

int main(){
    ifstream src("a.txt",ios::binary);
    ofstream dst("b.txt",ios::binary);
    dst<<src.rdbuf();
}

#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
using namespace std;

int main(){
    int sock = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in serv{};
    serv.sin_family = AF_INET;
    serv.sin_port = htons(8080);
    inet_pton(AF_INET,"127.0.0.1",&serv.sin_addr);

    connect(sock,(sockaddr*)&serv,sizeof(serv));
    cout<<"Connected\n";

    close(sock);
}

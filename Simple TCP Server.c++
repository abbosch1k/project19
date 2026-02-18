#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
using namespace std;

int main(){
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(8080);

    bind(server_fd, (sockaddr*)&addr, sizeof(addr));
    listen(server_fd, 3);

    int client = accept(server_fd, nullptr, nullptr);
    cout<<"Client connected\n";

    close(client);
    close(server_fd);
}

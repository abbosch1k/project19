#include <iostream>
#include <sys/epoll.h>
#include <unistd.h>
using namespace std;

int main(){
    int epfd = epoll_create1(0);

    epoll_event ev{};
    ev.events = EPOLLIN;
    ev.data.fd = 0; // stdin

    epoll_ctl(epfd, EPOLL_CTL_ADD, 0, &ev);

    epoll_event events[1];
    epoll_wait(epfd, events, 1, -1);

    cout<<"Event detected\n";
    close(epfd);
}

#include<iostream>     //  std header file
using namespace std;
#include"frienddemo.h" // user defined header file
void sum()
{
    FriendDemo obj1;
    int ans= obj1.a + obj1.b;
    cout<<"ans="<<ans<<endl;

     FriendDemo obj2(111,222);
    ans= obj2.a + obj2.b;
    cout<<"ans="<<ans<<"\n";
}
int main(void)
{
    cout<<"using member fubn defination outside class multiple file demo\n"<<endl;
    sum();
    return 0;
}

// g++ demo1.cpp  --->>   a.exe / a.out
// g++ frienddemo.cpp main.cpp a.exe / a.out
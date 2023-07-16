#include<iostream>     //  std header file
using namespace std;
#include"frienddemo.h" // user defined header file
// return_type class_name::member_fun_name(data_type parameters)
 // defination  of member functions
        FriendDemo::FriendDemo()
        {
            this->a=10;
            this->b=20;            
        }
        FriendDemo::FriendDemo(int a, int b)
        {
            this->a=a;
            this->b=b;            
        }
        void FriendDemo::print()
        {
            cout<<"this->a="<<this->a<<endl;
            cout<<"this->b="<<this->b<<endl;
        }
        FriendDemo::~FriendDemo()
        {
            this->a=0;
            this->b=0;            
        }

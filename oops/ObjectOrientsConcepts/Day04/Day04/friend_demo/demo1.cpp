#include<iostream>
using namespace std;
//=============================  class Decl frienddemo.h
class FriendDemo
{
    private:
        int a;
        int b;
    public:
    // decl of member functions
        FriendDemo();
        FriendDemo(int a, int b);
        void print();
        ~FriendDemo();
       friend void sum();

}; // end of class
//============================


//====================================  defination of member function (frienddemo.cpp)
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
//==================================


//==============================  main.cpp
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
    cout<<"using member fubn defination outside class"<<endl;
    sum();
    return 0;
}
// friend can access private/ public/ protected out side class
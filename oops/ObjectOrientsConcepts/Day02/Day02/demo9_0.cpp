#include<iostream>
using namespace std;
class FriendDemo
{
    private:
        int a;
        int b;
    public:
        FriendDemo()
        {
            this->a=10;
            this->b=20;            
        }
        FriendDemo(int a, int b)
        {
            this->a=a;
            this->b=b;            
        }
        void print()
        {
            cout<<"this->a="<<this->a<<endl;
            cout<<"this->b="<<this->b<<endl;
        }
        ~FriendDemo()
        {
            this->a=0;
            this->b=0;            
        }
       friend void sum();

};
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
    sum();
    return 0;
}
// friend can access private/ public/ protected out side class
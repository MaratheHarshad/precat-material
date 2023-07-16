#include<iostream>
using namespace std; 
// fun defination
int sum(int a=0, int b=0, int c=0, int d=0) // right to left
{
    cout<<" a= "<<a<<" b= "<<b<<" c= "<<c<<" d= "<<d<<endl;
    return a+b+c+d;
}
int main(void)
{
    int ans=0;
    ans= sum(10,20,30,40);  // a=10   b=20  c=30  d=40
    cout<<"ans="<<ans<<endl;  // ans=100

    ans= sum(10,20,30);    // a=10   b=20  c=30  d=0
    //ans= sum(,10,20,30);
    cout<<"ans="<<ans<<endl;// ans=60

   ans= sum(10,20);    // a=10   b=20  c=0  d=0
    cout<<"ans="<<ans<<endl;// ans=30

    ans= sum(10);    // a=10   b=0  c=0  d=0
    cout<<"ans="<<ans<<endl;// ans=10

    ans= sum();    // a=0   b=0  c=0  d=0
    cout<<"ans="<<ans<<endl;// ans=0

    return 0;
}
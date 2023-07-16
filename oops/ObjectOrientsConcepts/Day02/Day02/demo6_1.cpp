#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    int &r=a; // r is a reference of a
    // we can create a reference to object(variable)

    //int &r1=1000;
    // we can not create a reference to constant

    //int &r2=NULL; // int &r2=0;
    // we can not init reference with  NULL

}
#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    int &r=a; // r is a reference of a
    // int * const r=&a;
    cout<<"a="<<a<<"\t &a="<<&a<<endl;
    cout<<"r="<<r<<"\t &r="<<&r<<endl;

    a=100;
    cout<<"a="<<a<<"\t &a="<<&a<<endl;
    cout<<"r="<<r<<"\t &r="<<&r<<endl;

    r=1000;
    cout<<"a="<<a<<"\t &a="<<&a<<endl;
    cout<<"r="<<r<<"\t &r="<<&r<<endl;

    r++;
    cout<<"a="<<a<<"\t &a="<<&a<<endl;
    cout<<"r="<<r<<"\t &r="<<&r<<endl;


    a++;
    cout<<"a="<<a<<"\t &a="<<&a<<endl;
    cout<<"r="<<r<<"\t &r="<<&r<<endl;


    return 0;

}

/*
int no2=100;
int no1=10;                      int a=10;
int *ptr=NULL;                   int &r=a;
ptr=&no1;                        &r=b; //error
//int *ptr= &no1;

printf("\n *ptr=%d", *ptr);//10     cout<<"r="<<r<<endl;
 
ptr=&no2;
printf("\n *ptr=%d", *ptr); //100
*/
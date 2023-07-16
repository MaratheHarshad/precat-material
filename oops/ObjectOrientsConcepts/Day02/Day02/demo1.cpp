//#include<stdio.h> // c prog
// or
//#include<cstdio> // cpp way
#include<iostream>
using namespace std;
#define sq(a) a*a   // macro is command
#define sq1(a) (a)*(a)   // macro is command
inline int square(int a); // inline is a request
int main(void)
{
    int x=5, y=0;
    y= sq(x); // y= x*x;   y= 5*5; y=25;
    cout<<"using macro x="<<x<<"\t y="<<y<<endl;
    y= sq(x+x); // y= x+x*x+x // y=5+5*5+5 ==  35
    cout<<"using macro x="<<x<<"\t y="<<y<<endl;
    
    y= sq((x+x)); // y= (x+x)*(x+x) // y=(10)*(10)=100 
    cout<<"using macro x="<<x<<"\t y="<<y<<endl;
    
    y= sq1(x+x); // y= (x+x)*(x+x) // y=(10)*(10)==  100
    cout<<"using macro x="<<x<<"\t y="<<y<<endl;

    y= 25/sq(x); // y= 25/x*x;  y=25/5*5; y=5*5=25
    cout<<"[using macro x]="<<x<<"\t y="<<y<<endl;
    
    y= square(x);
    cout<<"using inline x="<<x<<"\t y="<<y<<endl;
    return 0;
}
inline int square(int a)
{
    return a*a;
}
// g++ demo1.cpp --->  a.exe window   .\a.exe 
// g++ demo1.cpp --->  a.out linux/mac  ./a.out

//g++ -E -o demo1.i demo1.cpp  to create  .i file
//gcc -E -o demo1.c demo1.c     to create  .i file

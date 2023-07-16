//template can be created for  
                  // 1. function 
                  // 2. class
// template should created in single file
// template should not be created in multiple file


#include<iostream>
using namespace std;
// n1 is reference of no1
// n2 is reference of no2
    template <class Type>
    void Swap(Type &n1, Type &n2)
    {
        Type temp=0;
        cout<<"before swap in swap n1="<<n1<<" \t n2="<<n2<<endl;
        temp=n1;
        n1=n2;
        n2=temp;
        cout<<"after swap in swap n1="<<n1<<" \t n2="<<n2<<endl;
        return;
    }

int main(void)
{   
    {
        cout<<"int data type"<<endl;
        int no1=10, no2=20;
        cout<<"before swap in main no1="<<no1<<" \t no2="<<no2<<endl;
        Swap(no1, no2); // no1 , no2 actual arg
        cout<<"after swap in main no1="<<no1<<" \t no2="<<no2<<endl;
    }
    {
        cout<<"float data type"<<endl;
        float no1=10.2f, no2=20.1f;
        cout<<"before swap in main no1="<<no1<<" \t no2="<<no2<<endl;
        Swap(no1, no2); // no1 , no2 actual arg
        cout<<"after swap in main no1="<<no1<<" \t no2="<<no2<<endl;
    }
    {
        cout<<"char data type"<<endl;
        char no1='A', no2='B';
        cout<<"before swap in main no1="<<no1<<" \t no2="<<no2<<endl;
        Swap(no1, no2); // no1 , no2 actual arg
        cout<<"after swap in main no1="<<no1<<" \t no2="<<no2<<endl;
    }
    return 0;

}
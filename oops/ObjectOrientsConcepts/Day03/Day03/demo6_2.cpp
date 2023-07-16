#include<iostream>
using namespace std;
int main(void)
{
    float *ptr=NULL;
    //ptr= new float;  // in cpp
    ptr= new float(3.142);  // in cpp to assign default value
 // ptr= (float*)malloc(1*sizeof(float));  // in c

  cout<<"*ptr="<<*ptr<<endl; // *ptr=1.23


    cout<<"enter *ptr=";
    //cin>>ptr; //error scanf("%d", ptr);
    cin>>*ptr;

    cout<<"*ptr="<<*ptr<<endl;

  delete ptr;
    ptr=NULL;
    cout<<"memory is freed"<<endl;
    return 0;
}
// g++ demo6.cpp  ---> ./a.out  
// valgrind ./a.out 
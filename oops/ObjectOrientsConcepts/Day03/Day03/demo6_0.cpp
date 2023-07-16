#include<iostream>
using namespace std;
int main(void)
{
    int *ptr=NULL;
    //ptr= new int;  // in cpp
    ptr= new int(125);  // in cpp to assign default value
 // ptr= (int*)malloc(1*sizeof(int));  // in c

  cout<<"*ptr="<<*ptr<<endl; // *ptr=125


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
#include<iostream>
using namespace std;
int main(void)
{
    char *ptr=NULL;
    //ptr= new char;  // in cpp
    ptr= new char('A');  // in cpp to assign default value
 // ptr= (char*)malloc(1*sizeof(char));  // in c

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
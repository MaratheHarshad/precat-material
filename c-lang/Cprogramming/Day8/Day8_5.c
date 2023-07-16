#include<stdio.h>

void test()
{
    int *p=NULL;
    p = (int * ) malloc(sizeof(int));
}
//here on exit of function memory given for p will be deallocated 
//hence there will not any pointer via which we can access dynamic memory
//it causes to memory leakage

int main()
{
    test();
}
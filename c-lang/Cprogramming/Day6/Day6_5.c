#include<stdio.h>
void test(int *);

int main()
{
    int num=5;
    printf("before num = %d \n",num);
    test(&num);
    printf("after call num = %d \n",num);
}

void test(int *p)
{
    printf("*p= %d \n",*p);
    *p = 7;
    printf("*p= %d \n",*p);
}
#include<stdio.h>
int fun(int x,int y)
{
    if(x==0)
    return y;
    return fun(x-2,y+x);
}
int main(void)
{
    int x=fun(4,4);
    printf("X is %d",x);
    return 0;
}
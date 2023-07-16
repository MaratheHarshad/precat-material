#include<stdio.h>
int main()
{
    int num = 3;
    
    int res = ++num + ++num;
    
    printf("%d", res);
    return 0;
}
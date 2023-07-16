#include<stdio.h>
int main()
{
    int x = 100, y = 200;
    if(x == y)
        printf("x is equal to y\n");

    else if(x > y)
        printf("x is greater than y\n");

    else if(x < y)
        printf("x is less than y\n") // error : statement missing
    return 0;
}
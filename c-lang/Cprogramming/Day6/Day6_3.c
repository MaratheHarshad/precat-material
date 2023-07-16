#include<stdio.h>

int main()
{
    int num = 5,fact;
    fact = factorial(num);
    printf("Factorial is =%d \n",fact);
}

//1  2   3   4   5
//1 * 2 * 3 * 4 * 5 = 120
//!1 = 1
//!1 * 2 = 2
//!2 * 3 = 6
//!3 * 4 = 24
//!4 * 5 = 120

int factorial(int n)
{
    if(n==1)
        return 1;

    return n * factorial(n-1);
}
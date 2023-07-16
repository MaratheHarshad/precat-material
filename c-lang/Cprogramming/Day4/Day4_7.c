#include<stdio.h>

int main()
{
    int i = 3;
    START:
        if(i>=1)
        {
            printf("%4d",i--);
            goto START;
        }
        else
            goto EXIT;  

    EXIT: //label definition 
    i--;
    i = i * 2;
    printf("%4d",i);
}
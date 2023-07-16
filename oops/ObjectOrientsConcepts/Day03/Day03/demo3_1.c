#include<stdio.h>
extern int no;  // decl of global variable
int main(void)
{
    printf("\n no=%d", no);
    return 0;
} int no;  // defination  of global variable
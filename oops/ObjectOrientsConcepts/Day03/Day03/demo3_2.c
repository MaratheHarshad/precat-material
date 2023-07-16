#include<stdio.h>
int no;  // defination  of global variable
int main(void)
{
    printf("\n no=%d", no);
    return 0;
} 
extern int no;  // decl of global variable

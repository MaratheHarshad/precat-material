#include<stdio.h>
extern int no;  // decl of global variable
int main(void)
{
    printf("\n no=%d", no);
    return 0;
} // error demo3.c:(.text+0x6): undefined reference to `no'
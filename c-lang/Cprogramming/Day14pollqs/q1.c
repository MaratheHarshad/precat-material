#include<stdio.h>
int main(int argc, char *argv[],char *envp[])
{
    argc--;
    while(argc)
    {
        printf("%c ", argv[argc--][4]);
    
    }
    
    return 0;
}

#include<stdio.h>
/* //argc here will catch count of arguments given to main 
int main(int argc)
{
    printf("Inside main() count=%d \n",argc);
} */


/* //argv here will catch all arguments given to main in string format
int main(int argc,char **argv) //char *argv[] //char argv[][]
{
    printf("Inside main() count=%d \n",argc);
    int i;
    for(i=0;i<argc;i++)
    {
        printf("%s \n",argv[i]);
    }
} */

//env here will collect all system enviornment variables in the string format
int main(int argc,char **argv,char **env)
{
    int i;
    for(i=0;i<32;i++)
    {
        printf("%s \n",env[i]);
    }
}
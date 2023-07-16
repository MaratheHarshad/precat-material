#include<stdio.h>
#include<string.h>

//strlen    //strcpy     //strcat   //strchr   //strstr //strcmp

size_t __cdecl mystrlen(const char * p)
{
    size_t len=0;
    while(*p !=NULL)
    {
        len++;
        p++;
    }
    return len;
}

int main()
{
    char s1[20];
    printf("Specify String \n");
                    //    0       1       2        3       4   
    gets(s1);//test //    t       e       s        t      \0
                    //  100     101     102      103    104    
    printf("Length of string = %u \n",strlen(s1));
}

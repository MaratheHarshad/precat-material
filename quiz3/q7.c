#include <stdio.h>
void main()
{
    int i=1;
    while (i<=5)
    {
       printf("%d",i);
       if (i==5)
              goto print;
       i++;
    }
}

/*

error

q7.c: In function 'main':
q7.c:9:15: error: label 'print' used but not defined
               goto print;
               ^~~~
               
*/
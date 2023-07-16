#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Specify numbers\n");
    c = scanf("%2d %2d",&a,&b);
    printf("a=%d b=%d c=%d\n",a,b,c);
}
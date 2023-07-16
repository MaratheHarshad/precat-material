#include <stdio.h>
#include <stdlib.h>

void sunbeam(int *p){

    ++*p;
    printf("value at *p = %d\n", *p);
    ++*p;
    printf("value at *p = %d\n", *p);
    *p++;
    printf("value at *p = %d\n", *p);


}

int main()
{

    int a = 4;
    sunbeam(&a);
    printf("value a = %d\n", a);
    
    return 0;
}

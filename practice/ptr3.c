#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[] = {5, 10, 15, 20};


    int *argv = arr;
    
    int r = ++*argv;

    printf("r = %d, *argv = %d\n\n", r, *argv); // 6 , 6

    r = *argv++;

    printf("r = %d, *argv = %d\n\n", r, *argv); // 6, 10

    r = *(++argv);

    printf("r = %d, *argv = %d\n\n", r, *argv); // 15, 15

    r = *(argv++);

    printf("r = %d, *argv = %d\n\n", r, *argv); // 15, 20



    return 0;
}

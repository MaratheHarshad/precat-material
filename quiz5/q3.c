#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int number = 5;
    // printf("%d", number);

    int *ptr = &number;

    // printf("%d", *ptr);

    *ptr = 20;
    // printf("%d", *ptr);

    (++*ptr);
    printf("%d", number);
    printf("%d", *ptr);

    return 0;

}

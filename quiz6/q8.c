#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "C_PROG";
    *(str + 2) = '\0';
    printf("%d\n", sizeof(str));
    printf("%d\n", strlen(str));

    return 0;
}

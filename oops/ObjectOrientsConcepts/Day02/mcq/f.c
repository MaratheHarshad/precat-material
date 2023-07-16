#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int a = 5;

    // printf("%d", a);

    char *ptr = "Marathe";

    int n = 8;

    char name[n];

    printf("%s\n", name);
    printf("size of name : %u\n", sizeof(name));
    strcpy(name, "Harshad Marathe");
    printf("size of name : %u\n", sizeof(name));
    printf("%s\n", name);

    return 0;
}

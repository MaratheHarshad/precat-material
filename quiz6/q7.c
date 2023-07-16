#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[8] = "Sunbeam";
    char str2[7] = "Sunbeam";

    int result = strcmp(str1, str2);

    printf("%c\n", str1[7]);
    printf("%s\n", str1);

    printf("result %d" , result);

    if(result == 0){
        printf("same");
    }else{
        printf("not same");
    }

    return 0;
}

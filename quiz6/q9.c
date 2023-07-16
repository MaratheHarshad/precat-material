#include <stdio.h>
#include <string.h>

void convert(char *s){
    int i = 0;



    while(*s++, i < strlen(s)){

        printf("%d\n", strlen(s));

        *s += 32;
        s++;
        printf("%d \n", i);
        i++;
    }
}

int main()
{
    char carr[10] = {68,65,67,0};
    convert(carr);
    printf("%s", carr);

    return 0;
}

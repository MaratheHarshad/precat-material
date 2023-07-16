#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num = 321;
    printf("%d", num);
    int *ptr = &num;

     printf("%d\n", *ptr);  // this line will print random value, as *ptr is a type of int pointer which is referencing to the address of char type which is of 1 byte, this will print the value present a 4 bytes
    *ptr++;
    // in above line
    //  ++ has more precednece than, * dereferencing operator
    //  so this does not change the value at the address of num
    //  instead it treated as ptr++
    // so ptr is not pointing to it's next address, (it is int pointer * , so considering 4 bytes for int data type)
    
    int *ptr2 = --ptr;
    // in above line
    // *ptr2 referencing to the address of num

    // here we re typecasting the ptr2 as char *, and printing it's value in decimal format
    printf("%d", *(char *)ptr2);
    return 0;
}

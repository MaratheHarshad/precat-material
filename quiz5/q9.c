#include <stdio.h>
#include <stdlib.h>

// void* is a type of pointer that can refer to the any other data type pointer 

void printB(void* arr, int n){

    /*

    In the printB function, the parameter void* arr is a void pointer.

A void pointer is a special type of pointer in C that can point to objects of any data type. It is essentially a generic pointer that doesn't have any specific type associated with it.

By using a void pointer as a parameter, the printB function can accept a pointer to any type of data. This provides flexibility because it allows the function to handle different data types without the need to define multiple versions of the function for each specific type.

Inside the printB function, the void pointer arr is cast to a char* pointer using (char*) arr. This casting is done to treat the arr pointer as a pointer to a character (1 byte) type. By doing this, the function can access and print the individual bytes of the data pointed to by arr, regardless of the original data type.

Overall, using a void pointer as a parameter in the printB function allows for a more generic and versatile implementation, enabling the function to work with different data types.
    
    */

    // printf("%d", n);
    
    /* 

    The given C code defines a function printB that takes a void pointer arr and an integer n as parameters. The printB function is responsible for printing the elements of the array arr as hexadecimal values.

In the main function, an array arr is defined with four integer elements: 16, 31, 32, and 65. The printB function is then called with arr as the first argument and 1 * sizeof(int) as the second argument.

Since the size of an int is typically 4 bytes (32 bits), 1 * sizeof(int) is equivalent to 1 * 4, which is 4. Therefore, the printB function will iterate over 4 bytes of memory starting from the address of arr.

Inside the printB function, a loop is used to iterate over the n elements of the array. In each iteration, the printf function is called to print the value of the current element as a hexadecimal number using the format specifier %02d. The cast (char*)arr is used to treat the arr pointer as a character pointer, allowing individual bytes to be accessed.

In the given code, the loop will execute four times since n is 4. However, the loop will only print the first byte of each integer element because the cast to (char*) treats the pointer as a char pointer, which is a single byte in size.

Therefore, the output of the given code will be:

10 00 00 00

Each two-digit hexadecimal number represents the first byte of each integer in the arr array. The values correspond to the hexadecimal representation of the decimal values 16, 31, 32, and 65, respectively.


    */

    int i;
    for(i = 0; i < n * 4 ; i++){
        printf("%02d ", ((char* ) arr)[i]);
    }
}

int main(int argc, char *argv[])
{
    int  arr [] = {16, 31, 32, 387};
    printB(arr, 1* sizeof(int));
    
    return 0;
}

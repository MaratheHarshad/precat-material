#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    int *ptr = &num;
    ++*ptr++;
    // in above line ptr++ , post increment operator is used, 
    // that's why derefrencing operator * still point to the same memory location, and ptr get incremented post execution

    printf("%d\n", num);
    printf("%d\n", *--ptr);
    return 0;
}


/*

The variable num is initialized with the value 10.

A pointer ptr of type int* is assigned the address of num.

The expression ++*ptr++ involves two operators: post-increment ++ and dereference *.

The post-increment ++ operator has higher precedence, so it is applied to ptr. It increments the pointer ptr to the next memory location (assuming int is 4 bytes).

Then, the dereference * operator is applied to the original value of ptr, accessing the value stored at that memory location. Since the value at the original memory location is 10, it is incremented to 11 using the pre-increment ++ operator.

The line printf("%d\n", num); prints the value of num as 11. This is because num was incremented in the previous step.

The line printf("%d\n", *--ptr); involves two operators: pre-decrement -- and dereference *.

The pre-decrement -- operator is applied to ptr, moving it back to the original memory location.

Then, the dereference * operator is applied to ptr, accessing the value stored at that memory location. Since the value at the original memory location is 11, it is printed.

*/

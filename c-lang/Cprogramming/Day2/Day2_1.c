#include<stdio.h>

//data section
//bss code segment
//stack section //local variable
//heap section  //dynamic memory

/* int main()
{
    //local variable always receives memory from stack //default value garbage
    int num; //request 4 bytes memory //4 bytes are initialsied with garbage
    
    printf("num = %d",num);   //num = 546546757
} */


/* int main()
{
    int num1 = 11; //declaration,definition,assignment
    int num2 = 22;
    printf("num1=%d num2=%d",num1,num2);  //11 22  
} */

/* int main()
{
    int num1 = 11; 
    int num2 = 22;
    printf("&num1=%u &num2=%u",&num1,&num2);    //6422300  6422296
} */


/* int main()
{
    int num1 = 65;  //00000000 00000000 00000000 01000001 
    int num2 = 66;
    printf("num1=%d num1=%c num1=%o num1=%x \n ",num1,num1,num1,num1);   
}  */

 /* int main()
{
    int num1 = 11; 
    int num2 = 22;
    printf("num1=%d num=%d \n",num1,num2);

    num1=555;
    num2=777;
    printf("num1=%d num=%d \n",num1,num2);    

    //5 = 2+3; //compile time error //lvalue-locator value required //
             //location whihc is modifiable in nature can be specified as left operand of =
} */

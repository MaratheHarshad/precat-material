#include<stdio.h>

/* int main()
{
    int num1=15,num2=7;

   if(num1>num2)
       printf("%d is grater\n",num1);
    else 
       printf("%d is grater\n",num2);

   num1>num2 ? printf("%d is grater\n",num1) : printf("%d is grater\n",num2) ;
}  */

/* int main()
{
    int num1=15,num2=7,max;
   if(num1>num2)
       max=num1;
    else 
       max=num2;
    max = num1>num2 ? num1 : num2 ;
    num1>num2 ? max=num1 : (max=num2);
    
    //(15>7 ? max=15 : max) =7 ;
    //15 = 7
    printf("Maximum value = %d \n",max);
} */


//1. ? and : operator has more precedence than = operator
//2. ? : and = operator follows associativity rule from R to L

int main()
{
    int num1=5,num2=7,num3=24,max;
    if(num1>num2)               //if(num1>num2 && num1>num3)
    {
        if(num1>num3)
            max=num1;
        else
            max=num3;   // num1>num3?num1:num3
    } 
    else
    {
        if(num2>num3)
            max=num2;
        else
            max=num3;  //num2>num3?num2:num3
    }
    max = num1>num2 ? (num1>num3?num1:num3) : (num2>num3?num2:num3) ;
    printf("Maximum value = %d \n",max);
} 


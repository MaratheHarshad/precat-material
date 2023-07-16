#include<stdio.h>
void fun(); //declaration

int main()
{
    int i=1;
    fun(); //call 
   
    //while(i)
    //{
      //  printf("Inside loop\n");
    //}
    printf("test line ..");
}

void fun()
{
    printf("Inside fun() ..." );
    fun(); //application will be abnormally terminated //it will cause to stack overflow
}//definition
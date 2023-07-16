#include<stdio.h>

void display_number(int n);

int main()
{
    int num;
    num = accept_number();
    display_number(num); //actual argument pass by value
    printf("num = %d \n",num);
    return 0;
}

int accept_number(void)
{
    int n;
    printf("Specify number \n");
    scanf("%d",&n);
    return n;
}

//if any actual argument is given to function then on entry of function 
//formal parameter will be newly created and actual argument will copied into formal parameter
void display_number(int num) //here n will receive new 4 bytes memory //num will e copied into num
{
    printf("Number %d",num);
    num++;
}//function do not return value


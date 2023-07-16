#include<stdio.h>

//keyword       scope       life            memory from         default value
//static        block       program         data section            0
void test();
int main()
{
    test();
    test();
    test();
}

/* void test()
{
    static int x ; //variable here is initialsied at the time declaration //default value is 0
    printf("%d\n",x);
    x++;
} */

/* void test()
{   //mmemory given for static variable is shared amongst multiple call of same function
    //static variable will receive memory on first call of a function in which it is declared
    //it is necessary to initialise static variable at the time of declaration 
    static int x = 5 ; //variable here is initialsied at the time declaration
    printf("%d\n",x);
    x++;
} */

/* void test()
{
    static int x=5 ; //variable here is initialsied at the time declaration
    printf("%d\n",x);
    x++;
    x=5;    //it spoils nature of static
} */

void test()
{
    int a = 10;
    int b = a;
    static int x =a ; //static variable can be initialsied with constant value only
    printf("%d\n",x);
    x++;
}

#include<stdio.h>
//keyowrd       scope       life        memory from         default value            
//extern        program     program      data section           0 
//extern is applicable only to global resource


int x;

int main()
{
    //int p; //declaration //definition //initialisation
    extern int p; //pure declaration
    printf("x=%d  &x=%u\n",x,&x);
    printf("p=%d  &p=%u\n",p,&p);
    x = 5;
    test();
    printf("x=%d  &x=%u\n",x,&x);
    printf("p=%d  &p=%u\n",p,&p);
 
}

int p=11;

void test()
{
    int p = 7; //p here will receive 4 bytes memory from stack section
    printf("x=%d  &x=%u\n",x,&x);
    x++;
    p++; //p=8 fro msatck section 
    printf("p=%d  &p=%u\n",p,&p); //p from stack section section
 
}
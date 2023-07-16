#include<stdio.h>
#pragma pack(1)

typedef struct
{
    unsigned age : 2;
}TEST;

typedef struct
{
    float per;
    char ch;
}DEMO;

int main()
{   
    printf("size = %u \n",sizeof(TEST));
    printf("size = %u \n",sizeof(DEMO));
    DEMO d1;
    TEST t1;
    //t1 = d1; 
    int *p;
   // p = &t1.age;
}
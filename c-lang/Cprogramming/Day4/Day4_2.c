#include<stdio.h>

enum colors{RED,GREEN,BLUE}; //pure declaration
enum days {SUN=1,MON,TUE=5,WED}; //SUN to represent int 1 now

/* int main()
{
    enum colors c1; //c1 here will receive 4 bytes memory
                    //c1 can store now any one member from enum colors
    c1 = RED;
    printf("c1 = %d \n",c1);

    enum days d1; //d1 here can be initialised with any one member from enum days
    d1 = WED;   
} */


int main()
{ //anonymous enum
    typedef enum {JAN=1,FEB,MAR,APR,MAY,JUN} MONTH;
    //MONTH is alias to anonymous enum
    MONTH month;
    month = 89; //possible 
    enum {ACNT,ADMN,MRKT,PURCHARSE}d1,d2;
    //d1 and d2 here are local variable type of anonymous enum

    FEB = 89; //2 =89
}

void show()
{
    MONTH m2;
    enum days d1;
}










#include<stdio.h>

typedef enum month{JANUARY=1,FEBRUARY,MARCH,APRIL,MAY} MONTH;

int main()
{
    //int month;
    MONTH month;
    int year;
    
    printf("Specify month \n");
    scanf("%d",&month);

    switch(month)
    {
        case JANUARY:
                printf("January has 31 days");
                break;
        case FEBRUARY:
                printf("Specify year \n");
                scanf("%d",&year);
                if((year%4==0 && year%100!=0) ||year%400 )
                    printf("February has 29 days \n");
                else
                    printf("February has 28 days \n");
                break;
        case MARCH:
                printf("March has 31 days");
                break;
        case APRIL:
                printf("April has 30 days");
                break;
    }
    printf("Outside switch..\n");
}


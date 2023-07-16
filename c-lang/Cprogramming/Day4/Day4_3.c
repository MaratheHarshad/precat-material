#include<stdio.h>


int main()
{
    int month,year;
    
    printf("Specify month \n");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
                printf("January has 31 days");
                break;

        default:
                printf("Invalid Month");
                break;
        case 2:
                printf("Specify year \n");
                scanf("%d",&year);
                if((year%4==0 && year%100!=0) ||year%400 )
                    printf("February has 29 days \n");
                else
                    printf("February has 28 days \n");
                break;
        case 3:
                printf("March has 31 days");
                break;
        case 4:
                printf("April has 30 days");
                break;
    }
    printf("Outside switch..\n");
}

//break is one of the jump statement which helps to move execution control
//outside switch or loop
 
// 
/* 
if(grade == 'A')

else if(grade == 'B')

else if (grade=='C')
 */
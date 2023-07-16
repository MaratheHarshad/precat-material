#include<stdio.h>

typedef enum {EXIT,COMP,IT,MECH,CIVIL,ENTC}MENU;

int main()
{
    MENU mchoice;
    do
    {
        printf("\n0.Exit \n");
        printf("\n1.Computer Science \n");
        printf("\n2.Information Technolgy \n");
        printf("\n3.Mechanical \n");
        printf("\n4.Civil Engineering \n");
        printf("\n5.Electronics and Telecommunication \n");
        printf("Specify degree \n");
        scanf("%d",&mchoice);
        switch(mchoice)
        {
            case COMP:
                        break;
            case IT :
                        break;
        }
    }while(mchoice!=0);
}
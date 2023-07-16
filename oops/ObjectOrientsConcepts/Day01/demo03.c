#include <stdio.h>

struct Time
{
    int hr;
    int min;
};

void acceptTime(struct Time *tptr)
{
    printf("Enter the hrs =  ");
    scanf("%d", &tptr->hr);
    printf("Enter the mins =  ");
    scanf("%d", &tptr->min);
}

void displyTime(struct Time *tptr)
{
    printf("Time = %d:%d", tptr->hr, tptr->min);
}

int main()
{
    struct Time t;
    acceptTime(&t);
    displyTime(&t);
    return 0;
}
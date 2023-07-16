#include <stdio.h>
#include <stdlib.h>
int main()
{
    enum feedbacks {POOR=1,AVERAGE,GOOD,EXCELLENT};
    enum feedbacks f1 = EXCELLENT , f2;
    AVERAGE < f1 ? f2=GOOD : f2 = POOR ;
    printf("%d",f2);
}

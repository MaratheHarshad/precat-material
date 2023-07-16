#include<stdio.h>


int main()
{
    enum feedback {POOR=1,AVERAGE,GOOD,EXCELLENT};
    enum feedback f1 = EXCELLENT,f2;
    AVERAGE<f1 ? f2=GOOD : (f2=POOR);

}
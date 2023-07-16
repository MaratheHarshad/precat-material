#include<stdio.h>

/* int main()
{
    int i;
    //step 1 i=1
        //step 2 1<=3 //2<=3 //3<=3 //4<=3
    for(i=1;i<=3;i++) //step i=2 //i=3 //i=4
    {
        printf("%4d",i); //step3 pf(1) //pf(2) //pf(3)
    }
} */

/* int main()
{
    int i=1;
    for( ; ; )
    {
        if(i==4)
            break;
        printf("%4d",i++);
    }
} */

/* int main()
{
    int i=1,j=5;
    for( ;i<=3,j>=1;j--)
    {
        printf("%4d %4d\n",i++,j);
    }
} */

int main()
{
    int i=1;
    for( ; i<=3; i++);
        printf("%4d\n",i);
}
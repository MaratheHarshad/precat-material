#include<stdio.h>

/* int main()
{
    int num,sum=0,rem;
    printf("Specify number \n");
    scanf("%d",&num); //1234

    while(num!=0) //while(1234!=0) 
    {
        rem = num%10;   //1234%10=4 //123%10=3 //12%10=2 //1%10=1
        sum = sum + rem; //sum=0+4=4 //sum=4+3=7 //sum=7+2=9 //sum=9+1=10
        num = num / 10; //num=1234/10 =123 //num=123/10 = 12 //num=12/10=1 //num=1/10=0
    }
    printf("Sum = %d \n",sum);
} */

/* int main()
{
    int i=3; //1. initial state
    while(i>=1) //2. expression check //3>=1 //2>=1 //1>=1 //0>=1 
    {
        printf("inside i=%d \n",i); //3 //2 //1
        i--;//3. modification statement //2 //1 //0
    }
    printf("Outside loop i=%d \n",i); //0
} */

/* int main()
{
    int i=3;
    while(i--) //while(3) i=2 //while(2) i=1 //while(1) i=0 //while(0) i=-1
        printf("Inside loop i=%d \n",i); //2 //1 //0

    printf("Ouside loop i=%d \n",i);//-1
} */


/* int main()
{
    char ch=1;
    while(ch<=255)
    {
        printf("ch=%d ch=%c \n",ch,ch);
        ch++;
    }
} */

/* int main()
{
    int i=1;
    if(i<=3)
        break;
}
 */

/* int main()
{
    int i=1;
    while(i<=5)
    {
        if(i==3)
            break; //in 3rd iteration when i=3 then forcefully control will be moved outsideloop
        printf("%4d",i++); //hence execution of next iterations are skipped
    }
    printf("outside ..\n");
} */

/* int main()
{
    int i=1; //i=2 //i=3 //i=4 //i=5 //i=6 //i=7
    while(i++ <= 5) //while(1<=5) //while(2<=5) //while(3<=5) //while(4<=5) //while(5<=5) //while(6<=5)
    {
        printf("%4d",i); //2 //3 //4 //5 //6
    }
    printf("Outside loop i=%d \n",i);
} */

/* int main()
{
    int i=1; 
    while(i++ <= 5)  
    {
        if(i==3)
            continue; //forcefully move execution control to next iteration

        printf("%4d",i); //2 //3 //4 //5 //6
    }
    printf("Outside loop i=%d \n",i);
}
 */

/* int main()
{
    int i=1; 
    while(i++ <= 5)  
    {
        if(i==3)
            return 0; //forcefully move execution control outside function

        printf("%4d",i); //2 //3 //4 //5 //6
    }
    printf("Outside loop i=%d \n",i);
}
 */

int main()
{
    int i=3;
    while(i--);
        printf("Inside i=%d \n",i);

    printf("outside i=%d \n",i);    
}


#include<stdio.h>

/* int main()
{
    int arr[5]={11,22,33,44,55};
    printf("arr=%u &arr=%u size=%u\n",arr,&arr,sizeof(arr));
    printf("arr+1=%u \n",arr+1); //104   //100 + 1 //address of int + 1*4 (element) 
    printf("*(arr+1)=%u arr[1]=%d\n",*(arr+1),arr[1]); //22  //22
    printf("&arr+1=%u",&arr+1); //address of array + 1*20

   // arr++;  //arr=arr+1 //lvalue required
    test(arr);
}

void test(int *p)//(int p[5])
{
    printf("p=%u &p=%u size=%u\n",p,&p,sizeof(p));
    printf("*(p+1)=%u p[1]=%d\n",*(p+1),p[1]); //22  //22
    int i=0; int *k=p;
    while(i<5)
    {
        printf("p=%u *p=%d",p,*p);
        p++; //p=p+1 // p=100+1 //p=104
        i++;
    }//after completion of loop p is on 120
    p--; //p=p-1 //p=120-1 //p=116

    int diff; 
    diff = p - k ;  //116 - 100 //address of int - address of int
                    //16/4 = 4 //difference of no. of eles between 2 addresses

   // p + k;
   // p + 1;
   // p * k;
   // p / k;
    printf("Difference = %d \n",diff);

    printf("p[-2] = %d \n",p[-2]);
} */

/* 
int main()
{
    int num=5;          //&num=100
    int *p = &num;      //p = 100
    //++*p; //*p = *p + 1 //num=6
    //*p++;   //1. *p     //2.p++ //p=p+1 //p=104
    //(*p)++;     //*p = *p + 1
    *(p++);     //p=p+1 //p=104 //*(104) 
} */



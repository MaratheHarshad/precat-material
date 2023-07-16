#include<stdio.h>
#include<stdlib.h>


int main()
{
    int num =  567; //&num=100
    char ch = 'A';  //&ch=104
    void *vptr; //it is a generic pointer designed to store address of any type location
    vptr = &num;    
    printf("vptr=%u *vptr =%d \n",vptr,*(int *)vptr);
    vptr = &ch;
    printf("vptr=%u *vptr =%d \n",vptr,*(char *)vptr);

}
#include<stdio.h>

/* int main()
{
    int arr[5]; //1D Array //it is request for memory for 5 velements of type int
    printf("size=%u \n",sizeof(arr));
} */

/* int main()
{
    int arr[5]={11,22,33,44,55};
    int index;
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));
    for(index=0;index<5;index++)
    {
        printf("%d %u \n",arr[index],&arr[index]);
    }
} */

/* int main()
{
    int arr1[]; //it is copulsory to provide last dimention
    int arr2[] = {11,22,33,44,55}; //can be skipped in case of only 1D array as elements are provided at the time of declaration
} */

/* 
int main()
{
    int arr[5]={11,22,33}; //members are initialsied partially at the time of declaration
    int index;
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));
    for(index=0;index<5;index++)
    {
        printf("%d %u \n",arr[index],&arr[index]);
    }
}  */


/* int main()
{
    int arr[5];
    int index;
    printf("arr=%u &arr=%u size=%u \n",arr,&arr,sizeof(arr));
    arr[0]=11;
    arr[1]=22;
    for(index=0;index<5;index++)
    {
        printf("%d %u \n",arr[index],&arr[index]);
    }
}  */

int main()
{
    int arr[]={11,22,33};
    for(int index=0;index<5;index++) //access array out of boundry
    {
        printf("%d %u \n",arr[index],&arr[index]);
    }
}//programmer is responsible to handle array boundry

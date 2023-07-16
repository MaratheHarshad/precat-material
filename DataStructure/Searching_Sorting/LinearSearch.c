#include<stdio.h>

#define SIZE 5

int linear_search(int *p,int n,int key)
{
    int index;
    for(index=0;index<n;index++)
    {
        if(p[index] == key) //visit each element sequentially and compare with key
            return index;   //if key is present 
    }
    return -1; //if key is not present 
}

int main()
{
    int arr[SIZE] = {22,5,28,18,44};
    int key,pos;

    printf("Sepcify Key to search in collection\n");
    scanf("%d",&key);

    pos = linear_search(arr,SIZE,key);

    if(pos == -1)
        printf("%d key is not present in collection \n",key);
    else
        printf("%d key is present in collection at %d index \n",key,pos);
}
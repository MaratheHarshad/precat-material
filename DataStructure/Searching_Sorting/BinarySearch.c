#include<stdio.h>
#define SIZE 5

int binary_search(int *p,int size,int key)
{
    int low=0,high=size-1,mid;
    while(low<=high)
    {
    mid = (low+high)/2;
    if(p[mid] == key)
        return mid; //key if present will be at mid location
    else if(key < p[mid])
        high = mid -1; //key may be present at left partion
    else if(key > p[mid])
        low = mid + 1;  //key may present at right partition
    }
    return -1;
}

int main()
{
    int arr[SIZE] = {22,5,28,18,44};
    int key,pos;

    printf("Sepcify Key to search in collection\n");
    scanf("%d",&key);

    pos = binary_search(arr,SIZE,key);

    if(pos == -1)
        printf("%d key is not present in collection \n",key);
    else
        printf("%d key is present in collection at %d index \n",key,pos);
}
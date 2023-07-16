#include<stdio.h>

/* int main()
{
    int arr[2][]={11,22,33,44,55,66}; //last dimention is compulsory
} */

/* int main()
{
    //int arr[2][3]={11,22,33,44,55,66};
    //int arr[2][3]={11,22,33,44,55};
    int arr[2][3]={{11,22},{44,55,66}};
    int r,c;
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%4d",arr[r][c]);
        }
        printf("\n");
    }
}
 */

int main()
{
    int arr[2][3]={{11,22},{44,55,66}};
    printf("arr=%u \n",arr);//100 //address of row 
    printf("arr+1=%u \n",arr+1);//112 //address of row + 1  //address of row
    printf("size=%u size=%u size=%u \n",sizeof(arr),sizeof(*arr),sizeof(**arr));
    printf("*(arr+1)=%u \n",*(arr+1)); // *(100+1) *(112) ==112 //address of int
    printf("*(arr+1)+1=%u \n",*(arr+1)+1);// // *(100+1) *(112) ==112 + 1=116 //address of int
    printf("*(*(arr+1)+1)=%u \n",*(*(arr+1)+1));// // *(100+1) *(112) ==112 + 1=116 *116=55 //address of int

}

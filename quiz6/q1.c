#include<stdio.h>
int main( void )
{
	int *ptr;
	int arr[100],i=0;
	char str[40] = "sunbeam pune & sunbeam hinjewadi";
	ptr = arr;

    // printf("%d" , i);
    printf("%d" , i[arr]);
	

	// i[0+i+arr] is valid because the cummulative property of c language
    // in the end arr[i] is derefrence as *(arr + i)
    // so we can use i[arr] as well as it is dereference as *(i + arr)
    // it is possible as long as both are valid indices
    // i is a scaler variable of type int

	if((arr[0+i]==i[0+i+arr]) && (arr[0+i] == *(ptr + i)) && (ptr == arr))
		printf("\n %s \n", (str+13));
	else
		printf("\n %s \n", (str+0));

	return 0;
}
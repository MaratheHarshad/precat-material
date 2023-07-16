#include<stdio.h>
/* #define STR(a) #a                           #a          #arr[1][1][0]=%d        "arr[1][1][0]=%d"
int main()
{
    int arr[2][2][2] ={{{1,2},{3,4}},{{5,6},{7,8}}},r=1,c=0;
    printf( "arr[1][1][0]=%d"   ,  *(*(*(arr+r)+r)+c));

    return 0; 
} */

/* 
#define STRINGIZE(x)  #x

int main()
{
    printf("%s", STRINGIZE(SUNBEAM)); //   printf("%s","SUNBEAM");
} */


/* #define STRINGIZE(x) char *s = #x; printf("Length = %u \n",strlen(s));

int main()
{
    //STRINGIZE(Wednesday)
    char *s = "Wednesday";
    printf("Length = %u \n",strlen(s));
} */


int main()
{
    #if 0
        printf("Preprocessor-true");
    #else
        printf("Preprocessor-false");
    #endif
}



//#define SIZE 5

int main()
{
    #ifndef SIZE
        printf("True");
    #endif
}


/* #define SIZE 5

int main()
{
    #ifdef SIZE
        printf("True");
    #endif
} */


#define SIZE 5
int main()
{
    printf("%d",SIZE);  //printf("%d",5);

    #undef SIZE
    #define SIZE 2
    printf("%d",SIZE);  printf("%d",2);
}
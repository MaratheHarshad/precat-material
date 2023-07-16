#include<stdio.h>

/* int main()
{
    int num = 5; //num here is designed to store int value
    printf("num=%d &num=%u \n",num,&num);
} */

/* int main()
{
    int num = 5; //num here is designed to store int value
    printf("num=%d &num=%u \n",num,&num);

    int *p= &num; //p is a pointer to integer //designed store address of an integer
    printf("p=%u &p=%u \n",p,&p);
} */


/* int main()
{
    char ch='A';
    int num = 5;
    float fvar = 56.67;

    char *cptr; //designed to store address of char memory location 
    int *p;     //designed to store address of int memory location
    float *fptr;    //designed to store address of float memory location

    cptr = &ch;
    p    = &num;
    fptr = &fvar;

    printf("size=%u size=%u size=%u \n",sizeof(cptr),sizeof(p),sizeof(fptr));
} */

/* int main()
{   // * value at operator //indirection operation //dererefencing operator
    int num = 5;
    int *p = &num;
    printf("num=%d *p=%d\n",num, *p);    //p=100 *100
    *p = 7;
    printf("num=%d *p=%d\n",num, *p); 
} */

/* int main()
{
    int num1=5, num2=7;
    //int *p; //unpredictable //wild pointer // which is not initialsied at the time declaration
    int *p=NULL; //NULL pointer is a pointer which do not point to any valid location
    p=&num1;
    printf("*p=%d\n",*p);
    p=&num2;        //pointer is a variable
    printf("*p=%d\n",*p);
} */


int main()
{
    int num2 = 5;
    int *p=&num2;
    int **pp=&p;          //&p == address of pointer to int
    printf("pp=%u \n",pp);// address of pointer to int 
    printf("*pp=%u \n",*pp); //address of integer
    printf("**pp=%u \n",**pp);//int value
    printf("&pp=%u \n",&pp); //address of pointer to pointer
}
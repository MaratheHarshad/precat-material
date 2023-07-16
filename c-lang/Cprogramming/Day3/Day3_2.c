#include<stdio.h>

//  int main()
// {
//     int a=1; //a=2
//     if(a++) //if(1)  //1. fist associate 2. increment //3. check expression check
//     {
//         printf("Inside if .. a=%d\n",a);
//     }
//     printf("Ouside if");
// } 

/* int main()
{
    int a=1; //a=0
    if(--a) //if(0)  //1.decrement 2. associate //3. check expression check
    {
        printf("Inside if .. a=%d\n",a);
    }
    printf("Ouside if");
} */

/* int main()
{
    int a=1; //a=0
    if(a--) //if(1)  //1.associate 2. decrement //3. check expression check
    {
        printf("Inside if .. a=%d\n",a);
    }
    printf("Ouside if a=%d \n",a);
} */

// int main()
// {
//     int a=1; //a=0
//     if(-4); //if(0)
//     {
//         printf("inside conditional statement\n");
//         printf("Inside if .. a=%d\n",a);
//     }
//     printf("Ouside if a=%d\n",a);
// } 

/* int main()
{
    int x=1;
    if(printf(""))
        x++;
    else
        x--;
    
    printf("Outside if x=%d \n",x);
} */


/* int main()
{
    int x=1;
    if(printf("hi")-2)
        x++;
    else
        x=2;
        x--;
    
    printf("Outside if x=%d \n",x);
} */

/* int main()
{
    int x=3;
    if(printf("hi")+2)  //if(2+2)
        x++; //x=3+1 //x=4
    else
        x=2;
        x--; //is not part of else //not even part of if //x=3
    
    printf("Outside if x=%d \n",x);
} */

// int main()
// {
//     int x=3;
//     if(printf("hi")+2)  //if(2+2)
//         x++; //x=3+1 //x=4
//     else
//     {
//         x=2;
//         x--; 
//     }
//     printf("Outside if x=%d \n",x); //x=4
// }

int main(){
    int a = 5;
int b = 2;
int c = 3;
int result = a += b += c;
printf("%d" , result);


}


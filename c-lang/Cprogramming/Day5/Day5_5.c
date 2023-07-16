#include<stdio.h>
//storage classes - auto //register //extern //static
//scope - to whom resource is known //who can access resource
//life  - timespan how long bytes memory is retained in live mode / in use mode

//keyowrd       scope       life        memory from         default value            
//auto          block       block       stack               garbage 

/* int main()
{
    auto int num;
}

void display()
{
    num++; //scope of num is limited to block main
} */


/* int main()
{
    int n = 5,a;    //&n = 100   n=5        &a = 104
    a = n * 2;      //a=5*2= 10 a=10        //&a=104
    {
        int n=1;    //&n=108  n=1
        n++;        //&n=108  n=2
        a = n *6;   //&a=104     a=2*6      a=12 
        printf("inner block n = %d \n",n); //n=2
    }//inner block can access members of outer block //on exit of inner block memory given for n with &108 will be released

    printf("outer block n = %d a=%d \n",n,a); //n=5 //a=12
}//outer block can not access members of inner*/


int main()
{
    int n=1;  //&n=100

    for( ; n<=5; n++)  //&n=10 1<=5 n=2 //2<=5  n=3 .....
    {//on every iteration entry n will receive new memory of 4 bytes &104
        int n=9;    //&n=104   n=9
        printf("n=%d \n",n++); //&n=104  n=10
    }//on exit of every iteration memory given for local n will be released
}

















#include<stdio.h>

/* int main()
{
    int a=5,b=2,c;
    c = a % b ; //provides reminder
    printf("c = %d \n",c);
} */

//c do not support for boolean data type
//if any expression results non zeo value then it is considered as true nothing but 1
//if any expression results  zeo value then it is considered as false nothing but 0

/* int main()
{
    int a=5,b=7,c;
    c= a >=b;
    printf("c = %d \n",c);
} */

//<exp1>    && <exp2>  = <result>
//    1     &&    1    = 1
//    1     &&    0    = 0
//    0     &&    1    = 0
//    0     &&    0    = 0

/* int main()
{
    int a=5,b=7,c;
    c= a<=b && b>=a;
        //1 && 1 //T - 1 
    printf("c = %d \n",c);
} */


// int main()
// {
//     int a=5,b=7,c;
//     c = printf("GoodMorning");   
//     printf("c = %d \n",c);
// } 

// int main()
// {
//     int a=5,b=7,c;
//     c = printf("GoodMorning") + printf("%10d",b);   
//         //11   + 10
//         //c=21
//     printf("c = %d \n",c);
// } 

/* int main()
{
    int a,b,c;
    c = printf("Hi..") && printf("hello");
    //c = 4  && 5 
    //c = 1  && 1
    //c = 1
    printf("c = %d \n",c);
}
 */

/* int main()
{
    int a=2,b=1,c;
    c= (a=a+2) && (b=b+2);
       // a=4 && 3
       // 1   && 1
        //1
    printf("a=%d b=%d c=%d \n",a,b,c);
}
 */

/* int main()
{
    int a=2,b=1,c;
    c= (a=a-2) && (b=b+2);
       // a=0  && <exp2> is skipped
      // 0
    printf("a=%d b=%d c=%d \n",a,b,c);
} */
//<exp1> && <exp2> if exp1 results false then exp2 is skipped from evaluation

//<exp1> || <exp2> = <result>
//  1    ||  0     =   1
//  0    ||  1     =   1
//  0    ||  0     =   0
//  1    ||  1     =   1

/* int main()
{
    int a=2,b=1,c;
    c= (a=a-2) || (b=b+2);
    //    a=0    || b=3
    //    0      || 1
    printf("a=%d b=%d c=%d \n",a,b,c);
}    */

/* int main()
{
    int a=2,b=1,c;
    c= (a=a+2)   || (b=b+2);
    //    a=4    || <exp> will be spped
    //    1      || 
    printf("a=%d b=%d c=%d \n",a,b,c);
}    */
//<exp1> || <exp2> if exp1 results true then exp2 is skipped from evaluation



/* int main()
{
    int a=2;
    ++a; //preincrement         a = a + 1
    printf("a=%d\n ",a); //a=3

    a=2;
    a++; //postincrement        a = a + 1
    printf("a=%d\n ",a); //a=3

    a=2;
    --a; //predecrement         a = a - 1
    printf("a=%d\n ",a); //a=1

    a=2;
    a--; //postdecrement        a = a - 1
    printf("a=%d\n ",a); //a=1
} */

//when ++/-- operator is applied before the operand
//1. apply ++/-- operation on operand on which ++/-- is applied
//2. Associate current state of a operand at sequence point

/* int main()
{
    int a=2,b=3,c;
    c = ++a;  //1. a=3
    //c = 3

    printf("a=%d c=%d \n",a,c);

    c = b++;  //2. b=4
    //c = 3;
    printf("b=%d c=%d \n",b,c);
} */

//when ++/-- operator is applied after the operand
//1. Associate current state of a operand at sequence point
//2. apply ++/-- operation on operand on which ++/-- is applied


//  int main()
// {
//     int a=2,b=3,c; //a=3 //b=4
//     c = a++ >= ++b;
//     //c = 2 >= 4
//     printf("a=%d b=%d c=%d \n",a,b,c); 
// }
 
//&& logical operator has more precedence than || operator
/* int main()
{
    int a=-10,b=3,c=0,d; //a=-9
    d = a++ || (++b && c++);
    //d = -10 ||
    //d=    1   || <skip> 
    
    a=-10; b=3; c=0; //c=1 a=a-9
    d= (c++ && ++b) || a++;
    //   0 &&  <skip> || -10 
    //   0            || 1
    //d = 1   
    printf("a=%d b=%d c=%d d=%d \n",a,b,c,d);
}
 */
//2 + (3 * 5)

//When comma operator is in precedence following both rules are applicable
//1.solve each expression separated by comma from left to right
//2. result of right most expression has to be associated at sequence point

//  int main()
// {
//     int a=2,b=3,c;

//     c = ++a, b++, a=10; //here comma operator is used and  partially comma operator rules are applied as comma is not in precendence
    
//     printf("a=%d b=%d c=%d \n",a,b,c); //here comma is used to separate argument given to function so it is not use of comma operator
// } 

// int main()
// {
//     int c ;
//     c = printf("11"),printf("20"),printf("300");
//     c = 1,2,3 ; //here = operator has more precedence than comma operator
//     // c = 1 
//     printf("c = %d \n",c);
// } 

/* int main()
{
    int c ;
    c = (printf("1"),printf("20"),printf("300"));
    // c = (1,2,3) ; //here = operator has more precedence than comma operator
    // c = 3 
    printf("c = %d \n",c);
}
 */


// 0111
// 1101
// 0101

/* int main()
{
    int a=7,b=13,c;
    c = a & b ;
    printf("c=%d \n",c);
}
 *//* 
    7   6   5   4   3   2   1   0
-----------------------------------
    0   0   0   0   0   1   1   1
&
    0   0   0   0   1   1   0   1
----------------------------------
    0   0   0   0   0   1   0   1
----------------------------------
                       2^2 2^1 2^0
                       2^2     2^0
                        4  +   1
                           5 */

/* int main()
{
    int a=7,b=13,c;
    c = a | b ;
    printf("c=%d \n",c);
} */
/* 
    7   6   5   4   3   2   1   0
-----------------------------------
    0   0   0   0   0   1   1   1
|
    0   0   0   0   1   1   0   1
----------------------------------
    0   0   0   0   1   1   1   1
----------------------------------
                    2^3 2^2 2^1 2^0
                     8 +  4 +  2 +  1
                        15 */
                        

// int main()
// {
//     int a=7,b=13,c;
//     c = a ^ b ;
//     printf("c=%d \n",c);
// }

/* 
    7   6   5   4   3   2   1   0
-----------------------------------
    0   0   0   0   0   1   1   1
^
    0   0   0   0   1   1   0   1
----------------------------------
    0   0   0   0   1   0   1   0
----------------------------------
                    2^3  2^2 2^1 2^0
                    2^3      2^1
                        8  +   2
                           10 */
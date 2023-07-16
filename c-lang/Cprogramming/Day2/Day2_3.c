#include<stdio.h>

/* int main()
{
    char ch1 = 'A';  // --->ascii value --->binary -->1 byte
    printf("ch1=%d ch1=%c ch1=%o ch1=%x \n",ch1,ch1,ch1,ch1);
} */

/* int main()
{
    char ch1 = 65;  
    printf("ch1=%c size=%u \n",ch1,sizeof(ch1));
} */

/* int main()
{
    signed char ch1 = 127;
    signed char ch2 = 128;
    signed char ch3 = 131;  
    printf("ch1=%d ch2=%d ch3=%d \n",ch1,ch2,ch3);
} //each variable by default is in nature signed  */


/* int main()
{
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3;
    ch3 = ch1 + ch2;
    printf("%d + %d = %d \n",ch1,ch2,ch3 );       //65 + 66 = 131
} */

/* int main()
{
    signed char ch1 = 'A';
    signed char ch2 = 'B';
    unsigned char ch3; // 0 to 255
    ch3 = ch1 + ch2;
    printf("%d + %d = %d \n",ch1,ch2,ch3 );       //65 + 66 = 131
} */

/* int main()
{
    signed int num1;
    unsigned int num2;
    short int num3;
    long int num4;
    printf("size=%u size=%u size=%u size=%u \n",sizeof(num1),sizeof(num2),sizeof(num3),sizeof(num4));
}
 */

/* int main()
{
    float fvar = 45.67;
    printf("fvar = %f size=%u \n",fvar,sizeof(float));
    printf("fvar = %.2f size=%u \n",fvar,sizeof(float));
    printf("fvar = %10.2f size=%u \n",fvar,sizeof(float)); //fvar = _ _ _ _ _ 4 5 . 6 7 
    printf("fvar = %-10.2f size=%u \n",fvar,sizeof(float));//fvar = 4 5 . 6 7 _ _ _ _ _
}
 */

/* int main()
{
    char ch1 = 'A';
    float fvar = 45.89;
    printf("size=%u size=%u size=%u \n",sizeof(char),sizeof(ch1),sizeof('A'));
    
    printf("size=%u size=%u size=%u \n",sizeof(float),sizeof(fvar),sizeof(45.89));
}
 */
//hardcoded character constant is always treated as of type int by compiler
//hardcoded float constant is always treated as of type double by compiler

/* int main()
{
    char ch1 = 65;
    //char = int //implicit typecasting  //narrow data from int to char
    printf("ch1 = %d \n",ch1);
    short int num1 = 65538; //0001  00000000 00000010
    //short int = int    //data may loss
    printf("num1 = %d \n",num1);   
    int num2 = 45.678;
        //int = double
    printf("num2 = %d \n",num2);

    float fvar = 4;
    //float = int   //promotint int to higher type float //no loss of data
    printf("fvar = %f",fvar);

} */

/* int main()
{
    int x;
    x = 5 / 9 ;
    //int = int / int 
    //int = int
    printf("x =%d \n",x);
}
 */

/* int main()
{
    int x;
    x = 5.0 / 9 ;
    //int = double / int 
    //int = double / double //right operand is converted implicitly to double type
    //int = double 
    printf("x =%d \n",x);
}
 */

/* int main()
{
    float x;
    x = 5.0 / 9 ;
    //int =double
    printf("x =%.2f \n",x);
} */

/* int main()
{
    float x;
    x = 5 / 9 ;
    //float = int /int
    //float = int
    printf("x =%.2f \n",x);
} */

int main()
{
    float x;
    x = (float)5 / 9 ; //explicit typecasting is applied to left operand
    //float = float /int
    //float = float / float  //right operand is implictly converted by compiler to float
    //float = float
    printf("x =%.2f \n",x);
}
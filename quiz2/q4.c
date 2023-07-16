#include <stdio.h>
enum type
{INT_A = 4 , DOUBLE_D = 26 , FLOAT_F = 3 , CHAR_CH = 65};
int main() 
{
    enum type temp;
    printf("%d", sizeof(DOUBLE_D));
}
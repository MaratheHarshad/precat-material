#include<stdio.h>
int main()
{
int a = 10, b = 2, c=0;
a = !( c = b == c) && ++b;
//  c = c + ~(a + b--);
c += ~( a + b--); 
printf( " %d %d %d", b, c, a);
return 0;
}
#include<stdio.h>
int main()
{
   int c = 0x41 ;
   int k = 100;

   printf("octal %o\n", c);
   printf("hexa %x\n", c);
   printf("character %c\n", c);
   printf("decimal %d\n", c);

   do
   {
       for( ; ;)
       {
            
          printf("%c ", c);
          break;
       }
       c++;
   }while(k != c);
   
   return 0;
}
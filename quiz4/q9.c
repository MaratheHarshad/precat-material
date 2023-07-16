
#include <stdio.h> 

void isStaticVarAccessible(){
    printf("y is static variable and it's value is %d", y);
}

int main()  
{  
  int x = 10;  

// Static variables have the property of preserving their value even after they are out of their scope! Hence, a static variable preserves its previous value in its previous scope and is not initialized again in the new scope. 

// ***  In C, static variables can only be initialized using constant literals. ***

//   static int y = x;  error

/* 
q9.c: In function 'main':
q9.c:5:18: error: initializer element is not constant
   static int y = x;
                  ^
*/

static int y = 10;
    
  if(x == y)  
     printf("Equal");  
  else if(x > y)  
     printf("Greater");  
  else
     printf("Less");  
  return 0;  
}
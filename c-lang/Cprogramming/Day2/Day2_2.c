#include<stdio.h>
// \ is escape character helps to escape original 
    //meaning of follwoed by character

/* int main()
{
    printf("Good Morning\nAll"); //adds a new line
} */

/* int main()
{
    printf("Good Morning\tAll"); //adds a horizontal tabspace
}
 */

/* int main()
{
    printf("Good Morning\rAll"); //it moves carraige to the begiining of same line
} */

/* int main()
{
    printf("Good Morning\b\bAll"); //it moves carraige one character back
}
 */

//  \v adds a vertical tabspace
//  \a adds a alert beep 
//  \f  adds form feed


/* int main()
{
    printf("d:\\PreCAT-CH04\\Day2\\Day2_1.c");
} */

/* int main()
{
    printf("Good \" Morning \" All !!!");
} */

int main()
{
    printf("ascii value of \\n = %d \n",'\n');
    printf("ascii value of \\t = %d \n",'\t');
    printf("ascii value of \\r = %d %c\n",'\r','\n');
    printf("ascii value of \\b = %d %c",'\b','\n');
}




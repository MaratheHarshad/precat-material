#include<stdio.h>

int main()
{
    char grade = 'A';
    float fvar =56.90;

    switch(grade)
    {
        case 'A':
                printf("Grade is A");
                break;
        case 'B':
                printf("Grade is B");
                break;
        case 65: //here 65 is not allowed again as causing to duplicate case
                break;

    }

    /* switch(fvar) //not allowed
    {
        case 1:
                break;
    } */

    switch(grade)
    {
        //case "A":       //case is followed by string which is not allowed
                    break;
        case 65>=97 && 65<=122: //case 1:
        case grade>=97 && grade<=122: //in this expr grade is variable will caUSE variable result
                        //case is expected to be  followed by int constant //not allowed 
                    break;
    }
}
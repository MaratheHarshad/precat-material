#include<stdio.h>
#include<string.h>


/* int main()
{
    char s1[20]="Test";     //100
    char s2[20]="Tester";   //200

    if(s1==s2)  //if(100==200)
    {
        printf("Same");
    }
    else
    {
        printf("different")
    }
} */

int __cdecl mystrcmp(const char *p1, const char *p2)
{
    while(*p1!=NULL && *p2 !=NULL)  //p1=100 p2=200//*p1='e' *p2='e'
    {
        if(*p1 != *p2 )
            break;
        p1++; p2++; //p1=101   p2=201
    }
    return *p1 - *p2;  // > 0  <0  ==0 
}

int main()
{
    char s1[20]="Test";     //100
    char s2[20]="TeSt";   //200
    strcmp(s1,s2);
}
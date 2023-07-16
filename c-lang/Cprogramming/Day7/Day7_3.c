#include<stdio.h>

/* int main()
{
    char carr[20] = {'a','b','c','d'}; //character array
    for(int i=0;i<20;i++)
    {
        printf("%c",carr[i]);
    }
} */

/* int main()
{                   // '\0' OR NULL // 0
    char carr[20] = {'t','e','s','t','\0'}; //string - is collection of characters always with sentinel element as NULL
    int i=0;
    while(carr[i]!=NULL)
    {
        printf("%c",carr[i]);
        i++;
    }
    printf("String = %s \n",carr);
} */

/* int main()
{
    char s1[20] = "test";
    char s2[] = "Friday";
    char s3[] = "Fri\0day";
    char *s4 = "Friday";
    printf("size=%u \n",sizeof(s1));    //20 
    printf("size=%u \n",sizeof(s2));  //7
    printf("size=%u \n",sizeof(s3)); //8
    printf("size=%u \n",sizeof(s4));//4
    printf("s3 = %s\n",s3); //Fri
}
 */

int main()
{
    char *s4 = "Friday";
    int num = 5;
    printf("Hello All ..");
    //*s4 = 'f';  //tryto modify memory at D.S.R.O. //causing to runtime error
    printf("check this ....");
    printf("s4=%u &s4=%u",s4,&s4);
    printf(s4); //Friday
    printf(s4+3); //day
}





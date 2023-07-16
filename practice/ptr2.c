#include <stdio.h>

int main()
{
    int array[] = {0,10,20,30,40,50,60};
    int* p = &array[1];
    int r;
    int i = 1;

    r = *p;
    printf("%d, r = *p: r=%d, p points to %d\n", i++, r, *p);
    r = *p++;
    printf("%d, r = *p++: r=%d, p points to %d\n", i++, r, *p);
    r = ++*p;
    printf("%d, r = ++*p: r=%d, p points to %d\n", i++, r, *p);
    r = *++p;
    printf("%d, r = *++p: r=%d, p points to %d\n", i++, r, *p);
    r = ++*p++;
    printf("%d, r = ++*p++: r=%d, p points to %d\n", i++, r, *p);

    // ++p++;
    printf("%d, ++p++: error: lvalue required as increment operand\n", i++);
    // r = *++p++;
    printf("%d, *++p++: error: lvalue required as increment operand\n", i++);
    // (++p)++;
    printf("%d, (++p)++: C error: lvalue required as increment operand\n", i++);
    printf("%d, ++p++: C++ p points to %d\n", i++, *p);

    // ++(p++);
    printf("%d, ++(p++): error: lvalue required as increment operand\n", i++);

     return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//     char a[]="54321\t\r\0";
//     char *s = "54321\n\0";

//     int i= strlen(a);

//     int j = strlen(s);

//     printf("here in i %d\n",++i);
//     printf("here in j %d\n",++j);

//     printf("%s\n", a);

//     printf("size of a : %d\n", sizeof(a));
//     printf("size of s : %d\n", sizeof(s));

//     return 0;
// }


// int main()
// {

//        int a[4] = { 10,20,30,40};
//        int *argv = a;
//        int t;
//        t = ++*argv; 
//        printf("%d\n",*argv); /* Here *argv is 11 */
//         printf("%d\n",t); /* Here t is 11 because of pre-increment */

//        *argv++; /* argv is incremented first ++ has higher priority over "*" */ 
//        printf("%d\n",*argv);/* *argv is printed which is 20 */

//        *(++argv); /* argv is incremented first ++ has higher priority over "*" */ 
//        printf("%d\n",*argv); /* *argv is 30 */

//        *(argv++); /* As explained above the same applies here also */
//        printf("%d\n",*argv);
//     }


// #define so(s) sizeof(s)
// int main(void)
// {
// char *s1="ditiss",s2[]="DITISS";
// printf("%d %d %d",sizeof(s1),sizeof(s2),so("DITISS"));
// return 0;
// } 
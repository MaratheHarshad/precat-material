#include<stdio.h>
int main(void)
{
    float const pi=3.142f;
    const float *ptr=&pi;
                               //3.142  3.142   
    printf("\n pi=%.3f *ptr=%.3f", pi, *ptr );

   // *ptr=4.4f;  error as value of pointer is constant
    // in cpp we can not change the value of contant using pointer
                               //3.142  3.142  
    printf("\n pi=%.3f *ptr=%.3f", pi, *ptr );

    return 0;
}
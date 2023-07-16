#include<stdio.h>
int main(void)
{
    float const pi=3.142f;
    float *ptr=&pi;
                               //3.142  3.142   
    printf("\n pi=%.3f *ptr=%.3f", pi, *ptr );

    *ptr=4.4f;
    // in c prog we can change the value of contant using pointer
                               //4.400  4.400  
    printf("\n pi=%.3f *ptr=%.3f", pi, *ptr );

    return 0;
}
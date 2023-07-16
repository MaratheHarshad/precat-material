#include<stdio.h>
void * malloc(size_t);
int main()
{
    int neles;
    int *p=NULL;
    printf("Specify No. of elements to process \n");
    scanf("%d",&neles);
    //1. request memory at runtime
    p = (int *)malloc(sizeof(int) * neles); //malloc requested memory is by default initialised with garbage 
    if(p==NULL)
    {
        printf("Not enough memory \n");
        return 0;
    }

    //2. if memory is received then use it
    printf("p=%u &p=%u\n",p,&p);
    for(int i=0;i<neles;i++)
    {
        *(p+i)= i + 10;
        printf("%d %u \n",*(p+i),p+i);
    }
    //3. deallocate memory 
    free(p);            //void free(void *);
    p=NULL;
    return 0;
}
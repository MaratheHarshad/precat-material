#include <stdio.h>
#include <stdlib.h>
#define SIZE 4 // symbolic constant

typedef struct  {
    int elements[SIZE];
    int top;
} stack;

int main()
{
    stack s;

    **s->top = -1;

    int choice = 5;

    printf("top is %d\n", *s->top);





    do{
        printf("click 1 for push\n");
        printf("click 2 for pop\n");
        printf("click 3 for peek\n");
        printf("click 4 to print stack\n");
        printf("click 5 for out\n");


        // printf("%d", **s->elements[5]);
        
        scanf("%d", &choice);

        switch(choice){

            case 1: {

                printf("top is %d\n", *s->top);
                
                if(*s->top == SIZE){
                    printf("Stack is fulll Cant insert");
                }else{
                    int data;

                    printf("Enter data : ");
                    scanf("%d", &data);
                    *s->elements[*s->top] = data;
                    
                }

                break;

            }

            case 2: {

                if(*s->top == -1){
                    printf("stack is empty");
                }else{
                    printf("Removed element is %d", *s->elements[*s->top--]);
                }

                break;
            }

            case 4:{

                if(*s->top == -1){
                    printf("stack is empty");
                }else{

                    // int i = 0;
                    // printf("[");
                    // while(i <= *s->top){
                    //     printf("%d, ", *s->elements[i]);
                    //     i++;
                    // }
                    printf("]");
                }

                break;
            }

        }




    }while(choice != 5);

    
    
    
}

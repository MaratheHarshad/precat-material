#include<stdio.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0
typedef enum {EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT}MENU;

typedef int BOOL;
typedef int ELEMENT;

typedef struct
{
    ELEMENT eles[SIZE]; //stack of integers
    int top;
}STACK;

MENU menu_choice()
{
    MENU mchoice;
    printf("0. Exit \n");
    printf("1. Push Element on stack \n");
    printf("2. Pop element from stack\n");
    printf("3. Peek element from stack\n");
    scanf("%d",&mchoice);
    return mchoice;
}
void init_stack(STACK *p)
{
    p->top = -1;
}

void accept_element(ELEMENT *p)
{
    printf("Specify number \n");
    scanf("%d",p);
}

void display_element(const ELEMENT *p)
{
    printf("Element is : %d",*p);
}

BOOL is_full(STACK *p)
{
    
    return p->top == SIZE-1 ? TRUE : FALSE;
} //check state of stack for its full state

void push_element(STACK *p,const ELEMENT *e)
{
    p->top++; //manage top area for new element 
    p->eles[p->top] = *e;
}//add element on stack

BOOL is_empty(STACK *p)
{
    return p->top == -1 ? TRUE : FALSE ;
}//check state of stack for its empty state

ELEMENT peek_element(STACK *p)
{
    return p->eles[p->top];
}

void pop_element(STACK *p)
{
    //assume top most element is deleted
    p->top--; //decide which element will be on top
}

int main()
{
    STACK s1;
    init_stack(&s1);
    ELEMENT ele;
    MENU mchoice;

    while((mchoice = menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case PUSHELEMENT:
                            if(is_full(&s1))//if stack is full 
                            {    //show message stack is full
                                printf("Stack has reached to overflow state\n");
                            }
                            else//if stack is not full
                            {
                                accept_element(&ele);//accept element 
                                push_element(&s1,&ele);//push element on stack
                            }
                            break;
            case POPELEMENT:
                            if(is_empty(&s1))//if stack is empty
                                printf("Stack is empty ...\n");//show message
                            else//if stack is not empty
                            {
                                ele = peek_element(&s1);//retrieve topmost element
                                display_element(&ele);
                                pop_element(&s1);
                            }

                            break;
            case PEEKELEMENT:
                            if(is_empty(&s1))//if stack is empty
                                printf("Stack is empty ...\n");//show message
                            else//if stack is not empty
                            {
                                ele = peek_element(&s1);//retrieve topmost element
                                display_element(&ele);
                            }
                            break;
        }

    }
}
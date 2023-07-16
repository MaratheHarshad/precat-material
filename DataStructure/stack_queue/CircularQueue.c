#include<stdio.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0
typedef enum {EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT}MENU;

typedef int BOOL;
typedef int ELEMENT;

typedef struct
{
    ELEMENT eles[SIZE]; //QUEUE of integers
    int rear,front;
}QUEUE;

MENU menu_choice()
{
    MENU mchoice;
    printf("0. Exit \n");
    printf("1. Push Element on QUEUE \n");
    printf("2. Pop element from QUEUE\n");
    printf("3. Peek element from QUEUE\n");
    scanf("%d",&mchoice);
    return mchoice;
}
void init_QUEUE(QUEUE *p)
{
    p->front=-1;
    p->rear=-1;
    for(int i=0;i<SIZE;i++)
    {
        p->eles[i] = -1;
    }//optional
} //initial state even can be considered as f=0 r=-1

void accept_element(ELEMENT *p)
{
    printf("Specify number \n");
    scanf("%d",p);
}

void display_element(const ELEMENT *p)
{
    printf("Element is : %d",*p);
}

BOOL is_full(QUEUE *p)
{
    //1. Keep on adding element till size-1 but no single ele is deleted from Q
    //2. keep on adding ele till size-1 after that no. of eles we del same no.of eles we add
    return (p->rear == SIZE-1 && p->front==0) || (p->rear+1 == p->front) ? TRUE : FALSE;
} //check state of QUEUE for its full state

void push_element(QUEUE *p,const ELEMENT *e)
{
    if(p->rear==SIZE-1)
        p->rear=0;
    else
        p->rear++; //manage rear area for new element 
    
    p->eles[p->rear] = *e; //ele is joining the Q
    
    if(p->front==-1)
        p->front=0;
}//add element on QUEUE

BOOL is_empty(QUEUE *p)
{
    //1. initial level Q is empty
    //2. after performing operation on Q it will be empty
    return (p->rear == -1) ? TRUE : FALSE ;
}//check state of QUEUE for its empty state

ELEMENT peek_element(QUEUE *p)
{
    return p->eles[p->front];
}

void pop_element(QUEUE *p)
{
    p->eles[p->front]=-1; //assume front most element is deleted
    if(p->front==p->rear)
    {
        p->front=0;
        p->rear=0;
    }
    else
    {
        if(p->front==SIZE-1)
            p->front=0;
        else
            p->front++; //decide which element will be on top
    }
}

void traverse_queue(QUEUE *p)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%4d",p->eles[i]);
    }
    printf("\trear=%d front=%d \n",p->rear,p->front);
}
int main()
{
    QUEUE q1;
    init_QUEUE(&q1);
    ELEMENT ele;
    MENU mchoice;

    while((mchoice = menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case PUSHELEMENT:
                            if(is_full(&q1))//if QUEUE is full 
                            {    //show message QUEUE is full
                                printf("QUEUE has reached to overflow state\n");
                            }
                            else//if QUEUE is not full
                            {
                                accept_element(&ele);//accept element 
                                push_element(&q1,&ele);//push element on QUEUE
                            }
                            break;
            case POPELEMENT:
                            if(is_empty(&q1))//if QUEUE is empty
                                printf("QUEUE is empty ...\n");//show message
                            else//if QUEUE is not empty
                            {
                                ele = peek_element(&q1);//retrieve topmost element
                                display_element(&ele);
                                pop_element(&q1);
                            }

                            break;
            case PEEKELEMENT:
                            traverse_queue(&q1);
                            break;
        }

    }
}
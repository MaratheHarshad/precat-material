#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data;
   struct node *next;
}node_t;

node_t *head=NULL; //linked is empty



void accept_data(int *p)
{
    printf("Specify data for new node\n");
    scanf("%d",p);
}

node_t * create_node()
{
    node_t *temp;
    temp = (node_t *)malloc(sizeof(node_t));
    temp->next = NULL;
    return temp;
}
void add_element_at_first(int *p)
{
    node_t *newnode;
    //1. request memory dynamically for a node
    newnode = create_node();
    //2. fill node data part
    newnode->data = *p; 
    //3. attach node in collection/list
    if(head ==NULL) //3.1  if list is empty
        head = newnode; //3.1.1 attach node 
    else //3.2 if list is ready
    {
			newnode->next = head;
			head = newnode;
	}//3.2.1. attach node
}

void traverse_list()
{
	node_t *trav = head; 
    if(head == NULL)
    {
        printf("List is empty !!!");
        return ;
    }
    while(trav!=NULL)
	{
	     printf("%d-->",trav->data);
	     trav = trav->next;
	}
}

void add_element_at_last(int *p)
{
    node_t *newnode,*trav;
    //1. request memory dynamically for a node
    newnode = create_node();
    //2. fill node data part
    newnode->data = *p; 
    //3. attach node in collection/list
    if(head ==NULL) //3.1  if list is empty
        head = newnode; //3.1.1 attach node 
    else //3.2 if list is ready
    {
        //for(trav=head;trav->next!=NULL;trav=trav->next);
    
		trav=head;
		while(trav->next!=NULL)
		{
		    trav=trav->next;
		} //traverse till last node
        trav->next = newnode; //attach nn next to last
	}//3.2.1. attach node
}

int size()
{
    int cnt=0;
    node_t *trav=head;
    while(trav!=NULL)
	{
	     cnt++;
	     trav = trav->next;
	}
}
void add_element_at_pos(int *p,int pos)
{
    node_t *newnode,*trav;
    int p;

    if(pos == 1)
        add_element_at_first(p);
    else if(pos == size()+1)
        add_element_at_last(p);
    else
    {
        newnode = create_node();
        newnode->data = *p;
        trav=head;
        p = 1;
        while(p < pos-1)
        {
            trav=trav->next;
            p++;
        }
        newnode->next = trav->next;
        trav->next = newnode;
    }
}
void del_element_from_first()
{
		node_t *temp;
		temp=head;
		head=head->next;
		free(temp);
		temp=NULL;
}
void del_element_from_last()
{
    node_t *prev=NULL, *trav=head;
    while(trav->next != NULL)
    {
        prev=trav;
        trav=trav->next;
    }
    if(prev==NULL)
        head = NULL;
    else
        prev->next=NULL;

    free(trav);
    trav=NULL;
}

void del_element_from_pos(int pos)
{
    node_t *trav,*temp;
    int p;
    if(pos==1)
        del_element_from_first();
    else if(pos == size())
        del_element_from_last();
    else
    {
        trav = head;
        p=1;
        while(p < pos-1)
        {
            trav=trav->next;
            p++;
        }
        temp = trav->next;
        trav->next=temp->next;
        free(temp);
        temp=NULL;
    }
}

void free_list()
{
    while(head!=NULL)
    {
        del_element_from_first();
    }
}
int main()
{
    int data,pos;
    accept_data(&data); //11
    add_element_at_first(&data);    
    accept_data(&data);//22
    add_element_at_first(&data);
    accept_data(&data);//33
    add_element_at_first(&data);
    accept_data(&data);//44
    add_element_at_first(&data);
    traverse_list();
    accept_data(&data);
    add_element_at_last(&data);
    
    printf("Specify position for newnode \n");
    scanf("%d",&pos);

    if(pos<=0 || pos> (size()+1))
        printf("Invalid Position \n");
    else
    {
        accept_data(&data);
        add_element_at_pos(&data,pos);
    }

    del_element_from_first();


    printf("Specify position for newnode \n");
    scanf("%d",&pos);

    if(pos<=0 || pos > size())
        printf("Invalid Position \n");
    else
    {
        del_element_from_pos(pos);
    }

    del_element_from_last();
    free_list();
}




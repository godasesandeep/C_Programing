#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node objNode;
typedef struct node * pNode;
typedef struct node ** ppNode;

void insertFirst(ppNode first,int no)
{
    pNode newNode =NULL;
    newNode = (pNode)malloc(sizeof(objNode));
    newNode->data=no;
    newNode->next=NULL;

    if(*first == NULL)
    {
        *first=newNode;
    }
    else
    {
        newNode->next=*first;
        *first=newNode;
    }


}

void insertLast(ppNode last ,int no)
{
    pNode newNode =NULL;
    newNode = (pNode)malloc(sizeof(objNode));
    newNode->data=no;
    newNode->next=NULL;

    if(*last == NULL)
    {
        *last=newNode;
    }
    else
    {
        pNode temp =*last;
        while(temp ->next != NULL)
        {
            temp = temp->next;
        }

        temp->next=newNode;
    }

}

void deleteFirst(ppNode first)
{
    if(*first == NULL) //Case1: No element
    {
        printf("Nothing to delete linklist is empty");
    }
    else if((*first) ->next == NULL) //Case2: single element
    {
        free(*first);
        *first =NULL;
    }
    else //Case3: multiple element in linklist
    {
        pNode temp = *first;
        *first = (*first)->next;
        free(temp);
    }
}

void deleteLast(ppNode first)
{
    if(*first == NULL) //Case1: No element
    {
        printf("Nothing to delete linklist is empty");
    }
    else if((*first) ->next == NULL) //Case2: single element
    {
        free(*first);
        *first =NULL;
    }
    else //Case3: multiple element in linklist
    {
        pNode temp = *first;
        while(temp->next->next !=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;

    }
}

void display(pNode head)
{
    while(head !=NULL)
    {
        printf(" %d \n",head->data);
        head=head->next;
    }

}

int count(pNode head)
{
    int count=0;
    while(head !=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}

void insertAtPos(ppNode first , int no, int pos)
{
    int len =0;
    len = count(*first);
    if(len<1 || pos>(len+1))
    {
        printf("Invalid position \n");
        return;
    }
    if(pos==1)
    {
        insertFirst(first,no);
    }
    else if(pos==len+1)
    {
        insertLast(first,no);
    }
    else
    {
        pNode newNode = NULL;
        newNode =(pNode)malloc(sizeof(objNode));
        newNode->data=no;
        newNode ->next = NULL;
        
        pNode temp =NULL;
        temp=*first;
        int i=0;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;

    }
}

void deleteAtPos(ppNode first , int pos)
{
    int len =0;
    pNode temp1=NULL;
    pNode temp2=NULL;
    int i=0;

    len = count(*first);
    if(len<1 || pos>len)
    {
        printf("Invalid position \n");
        return;
    }
    if(pos==1)
    {
        deleteFirst(first);
    }
    else if(pos==len)
    {
        deleteLast(first);
    }
    else
    {
        temp1=*first;
        for(i=1;i<pos-1;i++)
        {
            temp1=temp1 ->next;
        }

        temp2=temp1->next;
        temp1->next = temp2->next; //temp1->next =temp1->next->next;
        free(temp2);
    }
}

int main()
{
    pNode head = NULL;

    insertFirst(&head,9);
    insertFirst(&head,10);
    insertFirst(&head,11);
    insertFirst(&head,21);
    insertLast(&head, 100);
    insertLast(&head,101);
    insertAtPos(&head,111,4);
    //deleteFirst(&head);
    deleteAtPos(&head,4); //delete added 111 element
    display(head);
    printf("number of element in linked list is %d \n",count(head));
    return 0;
}
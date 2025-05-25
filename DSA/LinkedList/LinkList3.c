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
int main()
{
    pNode head = NULL;

    insertFirst(&head,9);
    insertFirst(&head,10);
    insertFirst(&head,11);
    insertFirst(&head,21);
    insertLast(&head, 100);
    insertLast(&head,101);
    display(head);
    printf("number of element in linked list is %d \n",count(head));
    return 0;
}
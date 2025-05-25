#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;

} objNode,*pNode,**ppNode;

//typedef struct node objNode;
//typedef struct node * pNode;
//typedef struct node ** ppNode;

void insertFirst(ppNode first , int no)
{
    pNode newNode = NULL;

    //Step1: Allocate dynamic memorey for new node
    newNode = (pNode)malloc(sizeof(objNode));

    //step2 : Initialize the new node
    newNode->data=no;
    newNode->next =NULL;

    //step3 : check the linked list empty

    if(*first==NULL)
    {
        *first =newNode;
    }
    else
    {
        newNode->next=*first;
        *first=newNode;
    }


}

void display(pNode first)
{
    while(first !=NULL)
    {
        printf("%d \n",first->data);
        first=first->next;
    }
}

int count(pNode first)
{
    
    int count=0;
    while(first !=NULL)
    {
        count++;
        first=first->next;
    }
    return count;

}

void insertLast(ppNode last, int no)
{
    pNode newLast=NULL;

    newLast =(pNode)malloc(sizeof(objNode));

    newLast->data=no;
    newLast->next=NULL;

    if(*last==NULL)
    {
        *last=newLast;
    }
    else
    {
        /*
        pNode prev=NULL;
        pNode fwd=NULL;
        prev=*last;
        fwd=prev->next;

        while(fwd !=NULL)
        {
            prev=fwd;
            fwd =fwd->next;
        }
        prev->next=newLast;

        */

        pNode temp=NULL;
        temp =*last;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newLast;

    }
}

int main()
{
    pNode Head =NULL;

    insertFirst(&Head,51);
    insertFirst(&Head,21);
    insertFirst(&Head,11);
    insertFirst(&Head,9);
    insertLast(&Head,109);
    insertLast(&Head,110);
    insertLast(&Head,111);
    display(Head);
    printf("%d \n",count(Head));
    
    return 0;
}
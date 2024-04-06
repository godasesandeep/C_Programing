#include<stdio.h>
#include<stdlib.h>


struct linkedlst
{
    int data;
    struct linkedlst *ptr; //get next nodes adress
};

void linklst_traversal(struct linkedlst * t)
{
    while(t!=NULL)
    {
        printf("Elemrnt: %d \n",t->data);
        t=t->ptr;
    }

}

void index_insersion(struct linkedlst * t,int data1, int index)
{
    for(int i=1;index>i;i++)
    {
        t=t->ptr;
       /* if(i==index-1)
        {
            struct linkedlst * inode;
            inode=(struct linkedlst *) malloc(sizeof(struct linkedlst));
            inode->data=data1;
            inode->ptr=t->ptr;
            t->ptr=inode;
        }
        */
        
    }
    struct linkedlst * inode;
    inode=(struct linkedlst *) malloc(sizeof(struct linkedlst));
    inode->data=data1;
    inode->ptr=t->ptr;
    t->ptr=inode;

}

int main()
{
    struct linkedlst* head;
    struct linkedlst* second;
    struct linkedlst* third;
    struct linkedlst* forth;

    //Allocation of memery for the node of linked list
    head=(struct linkedlst *) malloc(sizeof(struct linkedlst));
    second=(struct linkedlst *) malloc(sizeof(struct linkedlst));
    third=(struct linkedlst *) malloc(sizeof(struct linkedlst));
    forth=(struct linkedlst *) malloc(sizeof(struct linkedlst));

    head->data=7;
    head->ptr=second;

    second->data=10;
    second->ptr=third;

    third->data=11;
    third->ptr=forth;

    forth->data=9;
    forth->ptr=NULL;

    linklst_traversal(head);

    printf("Afer addition of 21 at index 2 \n");
    int data1=21;
    int index=2;

    index_insersion(head, data1, index);
    linklst_traversal(head);

    printf("Afer addition of 31 at index 3 \n");

    index_insersion(head, data1=31, index=3);
    linklst_traversal(head);

    return 0;
}
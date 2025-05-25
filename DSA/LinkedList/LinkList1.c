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

int main()
{
    pNode Head =NULL;
    //struct node * Head =NULL;

    objNode obj1;
    //struct node obj1;
    objNode obj2;
    objNode obj3;

    obj1.data =11;
    obj1.next =&obj2;

    obj2.data =21;
    obj2.next =&obj3;

    obj3.data = 51;
    obj3.next=NULL;

    Head = &obj1;

    printf("Head : %d \n",Head);
    printf("&obj1 : %d \n",&obj1);
    printf("&obj2 : %d \n",&obj2);
    printf("&obj3 : %d \n",&obj3);

    printf("Head-->data %d \n",Head->data); //11
    printf("Head-->next %d \n",Head->next);

    printf("Head-->next-->next %d \n",Head->next->next);
    printf("Head-->next-->data %d \n",Head->next->data); //21
    printf("Head-->next-->next-->next %d \n",Head->next->next->next);
    printf("Head-->next-->next-->data %d \n",Head->next->next->data); //51
    return 0;
}
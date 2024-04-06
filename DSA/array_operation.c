#include<stdio.h>

//Traversal,Insersion,Deletion

//Traversal Code
void show(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}


//insersion code
int index_insersion(int arr[],int index,int element,int size,int capacity)
{
    if(size==capacity)
    {
        printf("Index out of bound error");
        return -1;
    }
    for(int i=size;index<i;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    return 0;

}

void index_deletion(int arr[],int index,int size,int capacity)
{
    for(int i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }

}


int main()
{
    int arr[100]={10,20,30,40,50,60,70};
    int index=1,element=11,size=7,capacity=100;
    show(arr,size=7);
    index_insersion(arr,index=1,element=11,size=7,capacity=100);
    size++;
    show(arr,size);
    index_insersion(arr,index=3,element=21,size,capacity=100);
    size++;
    show(arr,size);
    index_deletion(arr,index=3,size,capacity);
    size--;
    show(arr,size=15);

    return 0;
}
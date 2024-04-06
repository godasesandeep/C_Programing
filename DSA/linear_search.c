#include<stdio.h>

int linear_search(int arr[],int element,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
            return i;
        
    }
    return -1;
}

int main()
{
    int arr[100]={10,20,30,40,50,60,70};
    int size=7,element=70,found_index;
    found_index=linear_search(arr,element=10,size);
    printf("Element found at index : %d \n",found_index);

    return 0;
}
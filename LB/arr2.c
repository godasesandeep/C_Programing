#include<stdio.h>

void Display(int ptr[],int iSize)
{
    for(int i=0;i<iSize;i++)
    {
        printf("%d \n",ptr[i]);
    }
}

int main()
{
        int arr[5]={10,20,30,40,50};
        Display(arr,5);
    return 0;
}
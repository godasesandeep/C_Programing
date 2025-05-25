#include<stdio.h>

int addition(int *ptr,int iSize)
{
    int sum=0;
    for(int i=0;i<iSize;i++)
    {
        sum=sum+*(ptr+i);
    }
    return sum;
}

int main()
{
        int arr[5]={10,20,30,40,50};
        int ret=addition(arr,5);
        printf("%d \n",ret);
    return 0;
}
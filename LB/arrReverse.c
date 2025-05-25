#include<stdio.h>
#include<stdlib.h>

void Rev(int arr[],int iSize)
{
    int start=0;
    int end=iSize-1;
    int temp=0;
    while(end>start)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}

int main()
{
        int iSize=0;
        int *brr=NULL;

        printf("Enter the size of arr : \n");
        scanf("%d",&iSize);
        brr=(int *)malloc(iSize*sizeof(int));
        printf("Enter the element \n");
        for(int i=0;i<iSize;i++)
        {
            scanf("%d",&brr[i]);
        }
        
        Rev(brr,iSize);
        for(int i=0;i<iSize;i++)
        {
            printf("%d  ",brr[i]);
        }
        free(brr);

    return 0;
}
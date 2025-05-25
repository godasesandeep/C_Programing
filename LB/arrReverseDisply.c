#include<stdio.h>
#include<stdlib.h>

void DisplayRev(int arr[],int iSize)
{
    for(int i=iSize-1;i>=0;i--)
    {
        printf("%d  ",arr[i]);
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
        
        DisplayRev(brr,iSize);

        free(brr);

    return 0;
}
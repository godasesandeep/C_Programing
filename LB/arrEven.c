#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int *ptr,int iSize)
{
    for(int i=0;i<iSize;i++)
    {
        if((*(ptr+i)%2)==0)
        {
            printf("%d \n",*(ptr+i));
        }
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
        
        DisplayEven(brr,iSize);

        free(brr);

    return 0;
}
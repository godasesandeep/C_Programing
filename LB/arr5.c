#include<stdio.h>
#include<stdlib.h>

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
        printf("Entered elements are : \n")
        for(int i=0;i<iSize;i++)
        {
            printf("%d \n",brr[i]);
        }

        printf("%d",addition(brr,iSize));

        free(brr);

    return 0;
}
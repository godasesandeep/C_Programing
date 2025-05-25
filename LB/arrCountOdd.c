#include<stdio.h>
#include<stdlib.h>

int countOdd(int *ptr,int iSize)
{
    int count=0;
    for(int i=0;i<iSize;i++)
    {
        if((*(ptr+i)%2)!=0)
        {
            count++;
        }
    }
    return count;
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
        
        printf("Number of odd element : %d" ,countOdd(brr,iSize));

        free(brr);

    return 0;
}
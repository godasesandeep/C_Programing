#include<stdio.h>
#include<stdlib.h>

void Positive(int *ptr,int iSize)
{
    for(int i=0;i<iSize;i++)
    {
            if(*(ptr+i)<0)
                *(ptr+i)=-(*(ptr+i));
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
        
        Positive(brr,iSize);
        printf("Updated array for positive  \n");

        for(int i=0;i<iSize;i++)
    {
            printf("%d  ",brr[i]);
    }

        free(brr);

    return 0;
}
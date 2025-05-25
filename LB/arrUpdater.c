#include<stdio.h>
#include<stdlib.h>

void updater(int *ptr,int iSize)
{
    for(int i=0;i<iSize;i++)
    {
            *(ptr+i)=*(ptr+i)+1;
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
        
        updater(brr,iSize);
        printf("Updated array by 1 \n");

        for(int i=0;i<iSize;i++)
    {
            printf("%d  ",brr[i]);
    }

        free(brr);

    return 0;
}
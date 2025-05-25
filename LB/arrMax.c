#include<stdio.h>
#include<stdlib.h>

int maximun(int *ptr,int iSize)
{
    int iMax=*(ptr);
    for(int i=1;i<iSize;i++)
    {
        if(*(ptr+i)>iMax)
        {
            iMax=*(ptr+i);
        }
    }
    return iMax;
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
        
        printf("Max Number : %d" ,maximun(brr,iSize));

        free(brr);

    return 0;
}
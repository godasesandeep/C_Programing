#include<stdio.h>

void display(int row, int col)
{
    for(int i=1;i<=row;i++)
    {
        for(int k=0;col>k;k++)printf("--");
        printf("\n");
        for(int i=1;i<=col;i++)
        {
            printf("* ");  
        }
    printf("\n");
    }
}

int main()
{
    int iValue=0 ,iValue2=0;
    printf("Enter Number row : \n");
    scanf("%d",&iValue);
    printf("Enter Number column : \n");
    scanf("%d",&iValue2);
    display(iValue,iValue2);
    return 0;
}
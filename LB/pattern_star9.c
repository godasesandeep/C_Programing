#include<stdio.h>

void display(int row, int col)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j==1||j==col||i==1||i==row)
            {printf("* ");}
            else
            {printf("  ");}
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
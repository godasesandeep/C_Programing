#include<stdio.h>

void display(int iNo)
{
    for(int i=1;i<=iNo;i++)
        printf("%d %d ",i,i);
    
}

int main()
{
    int iValue=0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}
#include<stdio.h>

void display(int iNo)
{
    for(int i=1;i<=iNo;i++)
        printf("& ",i);
    printf("\n");
    for(int i=1;i<=iNo;i++)
        printf("* ");
    printf("\n");

    for(int i=1;i<=iNo;i++)
        printf("$ ");

}

int main()
{
    int iValue=0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}
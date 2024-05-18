#include<stdio.h>

void display(int iNo)
{
    for(iNo;iNo>0;iNo--)
        printf("%d * ",iNo);

}

int main()
{
    int iValue=0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}
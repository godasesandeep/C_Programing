#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int no)
{
    if(no<0)
    no=-no;
    int sum=0;
    for(int i=1;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }
    if(no==sum)
    return true;
    else
    return false;
}

int main()
{
    int iValue=0;
    bool ret=true;
    printf("Enter the number: \n");
    scanf("%d",&iValue);
    ret=checkPerfect(iValue);
    if(ret)
    printf("Enter number %d is perfect",iValue);
    else
    printf("Enter number %d is not perfect",iValue);

    return 0;
}
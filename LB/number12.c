#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int no)
{
    if(no<0)
    no=-no;

    int i=0;
    for(i=2;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            break;
        }
    }
    if(i>no/2)
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
    ret=checkPrime(iValue);
    if(ret)
    printf("Enter number %d is prime",iValue);
    else
    printf("Enter nnumber %d is not prime",iValue);

    return 0;
}
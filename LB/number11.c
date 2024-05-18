#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int no)
{
    bool flag=true;
    if(no<0)
    no=-no;
    for(int i=2;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            flag=false;
            break;
        }
    }
    return flag;
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
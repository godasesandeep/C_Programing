#include<stdio.h>

int add(int a,int b)
{
return (a+b);

}

int multi(int a,int b)
{
    return (a*b);
}

int main()

{
    int num1=0,num2=0,sum=0,mul=0;
    printf("Enter the value of first number: \n");
    scanf("%d",&num1);
    printf("Enter the value of 2nd number : \n");
    scanf("%d",&num2);
    sum =add(num1,num2);

    printf("Addition of two functions %d \n",sum);
    mul=multi(num1,num2);
    printf("Multification of two number is %d",mul);
    return 0;
}
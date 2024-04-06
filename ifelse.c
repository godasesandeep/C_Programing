#include<stdio.h>

int main()
{
    int std;
    printf("Enter you standard : \n");
    scanf("%d",&std);
    if (std==1)
    {
        printf("Exam is at 7 am \n");
    }
    else if(std==2)
    {
        printf("exam is at 8AM \n");
    }
    else if(std==3)
    {
        printf("Exam is at 9AM \n");
    }
    else if(std==4)
    {
        printf("Exam ia at 10AM \n");
    }
    else
    {
        printf("Wrong standard \n");
    }


    return 0;
}
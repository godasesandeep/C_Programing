#include<stdio.h>


int main()
{
    int no,ans;
    printf("Enter the number : \n");
    scanf("%d",&no);
    ans = no%2; //not required
    if (no%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }


    return 0;
}
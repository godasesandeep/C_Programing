//given number is factor of 4

#include<stdio.h>
#include<stdbool.h>

bool checkFactor(int no,int fact)
{
    if((no%fact)==0)
        return true;
    else
        return false;
}

int main()
{
    int iValue=0;
    printf("Enter number to check divible of 4 or not :\n");
    scanf("%d",&iValue);
    if(checkFactor(iValue,4))
        printf("Yes,Factor");
    else
        printf("No Factor");
    return 0;
}
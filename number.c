#include<stdio.h>
#include<stdbool.h>

bool checkRange(int iNo)
{
    if(10<=iNo&&iNo<=20)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int no=0;
    printf("Enter the number which you want to check between 10 to 20 : \n");
    scanf("%d",&no);
    if(checkRange(no))
    {
        printf("Entered number is in range 10-20");
    }
    else
    {
        printf("Entered number is not in range 10-20");
    }
    return 0;
}
#include<stdio.h>

void DisplayBinary(int iNo)
{
    int iDigit =0;

    printf("bINARY cONVERSION IS (Reverse)\n");

    while(iNo !=0)
    {
        iDigit=iNo%2;
        printf("%d ",iDigit);
        iNo=iNo/2;
    }
}

int main()
{
    printf("Enter the number \n");

    int no=0;
    scanf("%d",&no);
    DisplayBinary(no);

    return 0;
}
#include<stdio.h>

void display(int iNo)
{
    char ch='\0';
    for(int i=1,ch='A';i<=iNo;i++,ch++)
    {
        printf("%c ",ch);
        //ch=ch+1;
        
    }


}

int main()
{
    int iValue=0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}
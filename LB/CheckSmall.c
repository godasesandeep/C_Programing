#include<stdio.h>
#include<stdbool.h>

void CheckCapital(char ch)

{
    if(ch>=97&&ch<=123)
    {
        printf("It's small letter");
    }
    else
    {
        printf("It's not a small letter");
    }
}

int main()
{

    char ch;
    printf("Enter letter : \n");
    scanf("%c",&ch);
    CheckCapital(ch);
}
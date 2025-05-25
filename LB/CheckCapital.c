#include<stdio.h>
#include<stdbool.h>

void CheckCapital(char ch)

{
    if(ch>='A'&&ch<='Z')
    {
        printf("It's Capital letter");
    }
    else
    {
        printf("It's not a capital letter");
    }
}

int main()
{

    char ch;
    printf("Enter letter : \n");
    scanf("%c",&ch);
    CheckCapital(ch);
}
#include<stdio.h>

void display(char * str)
{
    while(*str!='\0')
    {
    printf("%c \n",*str);
    str++;
    }
}

int main()
{
    char arr[50];
    
    printf("Enter name : \n");
    scanf("%[^'\n']s",arr);

    display(arr);

    return 0;
}
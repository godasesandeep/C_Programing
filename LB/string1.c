#include<stdio.h>

int main()
{
    char ch[] ="Hello";
    printf("%s",ch);
    int i=0;
    while(ch[i]!='\0')
    {
    printf("%c \n",ch[i]);
    i++;
    }

    return 0;
}
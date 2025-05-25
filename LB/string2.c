#include<stdio.h>

int main()
{
    char arr[50];
    
    printf("Enter name : \n");
    scanf("%[^'\n']s",arr);

    printf("Hello : %s \n",arr);

    return 0;
}
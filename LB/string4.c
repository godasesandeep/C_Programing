#include<stdio.h>
#include<string.h>


int main()
{
    char arr[50];
    
    printf("Enter name : \n");
    scanf("%[^'\n']s",arr);

    printf("Number of letter is : %d",strlen(arr));

    return 0;
}
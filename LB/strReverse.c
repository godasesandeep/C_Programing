#include<stdio.h>
#include<stdbool.h>

void strRevX(char * str)
{
    char * start=str;
    char * end=str;
    char temp;

    while(*end!='\0')
    {
        end++;
    }
    end--;
    while(start<end)
    {
        temp =*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    
}

int main()
{
    char arr[50];
    char cValue;

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    strRevX(arr);
    printf("Updated string is  : %s ",arr);


    return 0;

}
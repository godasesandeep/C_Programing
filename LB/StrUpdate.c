#include<stdio.h>
#include<stdbool.h>

void update(char * str)
{
    while(*str!='\0')
    {
        if(*str == ' ')
        {
            *str='_';
        }
        str++;
    }
    
}



int main()
{
    char arr[50];
    char cValue;

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    update(arr);
    printf("Updated string is  : %s ",arr);


    return 0;

}
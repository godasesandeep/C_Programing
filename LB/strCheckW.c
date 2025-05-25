#include<stdio.h>
#include<stdbool.h>

bool CheckW(char * str)
{
    bool flag=false;
    while(*str!='\0')
    {
        if(*str =='w')
        {
            flag=true;
            break;
        }
        str++;
    }
    return flag;
}



int main()
{
    char arr[50];

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    if(CheckW(arr))
    printf("Letter w is present ");
    else
    printf("Letter w is absent ");


    return 0;

}
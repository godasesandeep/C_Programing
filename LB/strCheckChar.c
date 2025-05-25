#include<stdio.h>
#include<stdbool.h>

bool CheckCh(char * str,char ch)
{
    bool flag=false;
    while(*str!='\0')
    {
        if(*str == ch)
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
    char cValue;

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    printf("Enter character \n");
    scanf(" %c",&cValue); //space given @ start 
    if(CheckCh(arr,cValue))
    printf("Letter  is present ");
    else
    printf("Letter  is absent ");


    return 0;

}
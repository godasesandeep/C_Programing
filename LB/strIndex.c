#include<stdio.h>
#include<stdbool.h>

int letterIndex(char * str,char ch)
{
    int count=0;
    bool flag=false;
    while(*str!='\0')
    {
        if(*str == ch)
        {
            flag=true;
            break;
        }
        count++;
        str++;
    }
    if(flag)
    {
    return count;
    }
    else
    {
    return -1;
    }
}



int main()
{
    char arr[50];
    char cValue;

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    printf("Enter character \n");
    scanf(" %c",&cValue); //space given @ start 
    printf("Letter occuers at : %d ",letterIndex(arr,cValue));


    return 0;

}
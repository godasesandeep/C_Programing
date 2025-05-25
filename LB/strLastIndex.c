#include<stdio.h>
#include<stdbool.h>

int lastIndex(char * str,char ch)
{
    int count=1;
    int occur=-1;
    while(*str!='\0')
    {
        if(*str == ch)
        {
            occur=count;
        }
        count++;
        str++;
    }
    return occur;
}



int main()
{
    char arr[50];
    char cValue;

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    printf("Enter character \n");
    scanf(" %c",&cValue); //space given @ start 
    printf("Last Letter occuers at : %d ",lastIndex(arr,cValue));


    return 0;

}
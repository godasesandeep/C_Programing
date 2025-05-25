#include<stdio.h>
#include<stdbool.h>

int frequency(char * str,char ch)
{
    int count =0;
    while(*str!='\0')
    {
        if(*str == ch)
        {
            count++;
        }
        
        str++;
    }
    
    return count;
    
}



int main()
{
    char arr[50];
    char cValue;

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    printf("Enter character \n");
    scanf(" %c",&cValue); //space given @ start 
    printf("number of Letter occuers : %d ",frequency(arr,cValue));

    return 0;

}
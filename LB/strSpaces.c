#include<stdio.h>

int strSpace(char * str)
{
    int count =0;
    while(*str!='\0')
    {
        if(*str ==' ')
        count++;
        str++;
    }
    return count;
}



int main()
{
    char arr[50];

    printf("Enter the name : \n");
    scanf("%[^'\n']",arr);
    printf("Number of Spaces letter in name is : %d",strSpace(arr));

    return 0;

}
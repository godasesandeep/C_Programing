#include<stdio.h>

int strlenX(char * str)
{
    int count =0;
    while(*str!='\0')
    {
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
    printf("Number of character in name is : %d",strlenX(arr));

    return 0;

}
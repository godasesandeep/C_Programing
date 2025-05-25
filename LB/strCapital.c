#include<stdio.h>

int strCaplenX(char * str)
{
    int count =0;
    while(*str!='\0')
    {
        if(*str >='A'&&*str<='Z')
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
    printf("Number of Capital letter in name is : %d",strCaplenX(arr));

    return 0;

}
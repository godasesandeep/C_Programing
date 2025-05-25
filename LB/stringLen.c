#include<stdio.h>

int strlenX(char brr[])
{
    int i=0;
    int count =0;
    while(brr[i]!='\0')
    {
        count++;
        i++;
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
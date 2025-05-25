#include<stdio.h>

int CountVowel(char * str)
{
    int count =0;
    while(*str!='\0')
    {
        if(*str =='a'||*str =='e'||*str =='i'||*str =='o'||*str =='u')
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
    printf("Number of Vowel letter in name is : %d",CountVowel(arr));

    return 0;

}
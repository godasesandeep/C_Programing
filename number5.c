#include<stdio.h>

void displayFactors(int no)
{
    for(int i=1;i<no;i++)
        if(!(no%i))
         printf("%d \n",i);
}
int main()
{
    int no=0;
    printf("Enter number : \n");
    scanf("%d",&no);
    displayFactors(no);
    return 0;
}
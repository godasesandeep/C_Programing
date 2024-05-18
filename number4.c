#include<stdio.h>

void displayNo(int no)
{
    no=no/2;
    for(int i=1;i<=no;i++)
        printf("%d \n",i);
}
int main()
{
    int no=0;
    printf("Enter number : \n");
    scanf("%d",&no);
    displayNo(no);
    return 0;
}
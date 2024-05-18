
#include<stdio.h>

int sumFactors(int no)
{
    int sum=0;
    for(int i=1;i<no;i++)
        if(!(no%i))
         sum=sum+i;
    return sum;
}
int main()
{
    int no=0;
    printf("Enter number : \n");
    scanf("%d",&no);
    printf("Sumation of factor %d \n",sumFactors(no));
    return 0;
}
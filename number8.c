
#include<stdio.h>
//Time Complexity : O(N/2)
int countFactors(int no)
{
    int counter=0;
    no=no/2;
    for(int i=1;i<=no;i++)
        if(!(no%i))
         counter++;
    return counter;
}
int main()
{
    int no=0;
    printf("Enter number : \n");
    scanf("%d",&no);
    printf("Number of factor %d \n",countFactors(no));
    return 0;
}
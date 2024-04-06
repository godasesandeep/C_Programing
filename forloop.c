#include<stdio.h>

int main()
{
    int n,ic=0,sum=0;
    printf("Enter the number : \n");
    scanf("%d",&n); 
    for(;ic<=n;) //initialization & manipulation expression are skied but still ; compartment nedded
        sum=sum+ic++;
    printf("sum of the first n=%d number is %d",n,sum);
    return 0;
}
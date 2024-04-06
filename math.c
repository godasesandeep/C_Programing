#include<stdio.h>

int addition(int no1,int no2)
{
    int ans=0;
    ans = no1 + no2;
    return ans;
}

int main()
{
    int A=10;
    int B=11;
    int Ret =0;
    printf("Inside main function..\n");
    Ret =addition(A,B);
    printf("%d\n",Ret);
    return 0;
}
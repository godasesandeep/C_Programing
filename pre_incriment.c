#include<stdio.h>


int main()
{
    int a=2,b=2,c,d;
    c=++a;
    d=b++;
    a++;
    printf("a= %d , b= %d , c= %d , d= %d",a,b,c,d);  //a= 4 , b= 3 , c= 3 , d= 2
    return 0;
}
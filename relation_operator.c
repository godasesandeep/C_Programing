#include<stdio.h>

int main()
{
    int a;
    a=2<3!=2;
    printf("Value of expression is %d",a); 
    /*The expression a=2<3!=2 is interpreted as 
a=(2<3)!=2. The sub-expression 2<3 is true (i.e. 1). 
1!=2 is true (i.e. 1). So, 1 is assigned to a*/
    return 0;
}
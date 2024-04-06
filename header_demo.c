#include<stdio.h>
//User defined header file
# include "header_demo.h"


int main()
{
    struct demo obj;
    obj.no=21;
    float f=PI;
    printf("value of pi : %f\n",f);
    printf("vale of  obj.no %d \n",obj.no);
    int add=0;
    int a=11;
    add=sum(obj.no,a);
    printf("addition of 21 and 11 is %d \n",add);
    int b=10;
    swap(&a,&b);
    printf("Value of a and b is : %d, %d",a,b);

    return 0;
}
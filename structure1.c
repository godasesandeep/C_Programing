#include<stdio.h>

struct demo
{
    int no;
    float f;
    double d;

};

int main()

{

    struct demo obj;
    obj.no = 11;
    obj.f =99.99;
    obj.d = 90.9999;

    float a=11.1;

    printf("%d \n",obj.no);
    printf("%f \n",obj.f);
    printf("%f \n",obj.d);
    printf("%d \n",sizeof(obj));
    printf("%f \n",a);


    return 0;
}
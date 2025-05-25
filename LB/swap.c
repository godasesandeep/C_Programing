#include<stdio.h>
#include<stdlib.h>

void swap(int *p,int *q)
{
    int temp=0;
    temp=*p;
    *p=*q;
    *q=temp;

}

int main()
{
        int a=10,b=20;

        printf("Before swap %d %d \n",a,b);
        swap(&a,&b);

        printf("After swap  %d %d \n",a,b);
        

    return 0;
}
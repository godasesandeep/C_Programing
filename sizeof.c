#include<stdio.h>

int main()
{
    int i=10;
    char ch='A';
    float f=10.11;
    double d=90.99999;

    int Arr[5]; //20 bytes
    double Brr[5]; //40
    float Crr[5]; //20
    char Drr[5]; //5

    printf( " arr int = %d ,arr char = %d , arr float = %d ,arr double = %d  \n",sizeof(Arr),sizeof(Drr),sizeof(Crr),sizeof(Brr));

    printf("sizeof pure int data type is %d  \n",sizeof(int));

    printf( "int = %d ,char = %d , float = %d ,double = %d  \n",sizeof(i),sizeof(ch),sizeof(f),sizeof(d));

    return 0;
}
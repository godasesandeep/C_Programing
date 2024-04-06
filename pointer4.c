#include<stdio.h>


int main()

{
    int no=11, *ptr=&no;
    //ptr = &no;


    printf("Adress of no variable  %d \n",&no);
    printf("Adress of no variable by using ptr pointer = %d \n",ptr);
    printf("Value of no variable %d \n",no);
    printf("Value of no variable using ptr is %d",*ptr);

    return 0;
}
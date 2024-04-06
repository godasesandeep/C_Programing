#include<stdio.h>


int num=101;

void function1()
{

    int mnum=51;
    int fnum=21;

    printf("From function1 value of mnum is : %d \n",mnum);
    printf("from function1 the value of fnum : %d \n",fnum);
    printf("from function1 value of x is : %d \n",num);

}

int main()
{
    int mnum=11;

    printf("From main value of mnum is : %d \n",mnum);
    printf("from main global value of x is : %d \n",num);
    function1();


    return 0;
}
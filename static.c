#include<stdio.h>


void func()
{
    static int t;
    static int i=10;
    i++;
    printf("Value of i is %d \n",i);
    printf("Value of t is %d \n",t);
}

int main()
{
    func();
    func();
    func();

    return 0;
}

/*
where the memory gets allocated :Static segment
What is the default value       : 0,0.0,'/0'
what is the scope               : Inside the function
What is the lifetime            : Global

*/
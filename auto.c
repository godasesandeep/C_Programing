#include<stdio.h>


void func()
{
    int i=11;
    auto int j=21;
    auto int k;
    printf("%d \n",k);
}

int main()
{
    func();

    return 0;
}

/*
where the memory gets allocated :Stack
What is the default value       : Garbage
what is the scope               : Inside the function
What is the lifetime            : Local

*/
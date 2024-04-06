#include<stdio.h>


void func()
{
    int i=11;
    register int j=21;
    register int k;
    printf("%d \n",k);
}

int main()
{
    func();

    return 0;
}
/*
where the memory gets allocated :CPU register
What is the default value       : garbage
what is the scope               : Inside the function
What is the lifetime            : local

*/
#include<stdio.h>

struct demo
{
    int data;
    struct demo obj; //error: field 'obj' has incomplete type

};


int main()
{

    return 0;
}
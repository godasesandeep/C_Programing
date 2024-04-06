#include<stdio.h>



struct demo
{
    int data;
    struct hello
    {
        int no;
        float f;

    }hobj; 

};


int main()
{
    int data;
    struct demo dobj;
    dobj.data=11;
    dobj.hobj.no=21;
    dobj.hobj.f=90.00;
    return 0;
}
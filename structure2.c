#include<stdio.h>


struct ashwini
{

    int no;
    float f;
    int i;
};

int main()
{
    struct ashwini aobj;
    struct ashwini *ptr =&aobj;

    ptr->no=11;
    ptr->f=19.99;
    ptr->i=10;

    printf("%d \n",ptr->no);
    printf("%d \n",aobj.no);

    return 0;
}
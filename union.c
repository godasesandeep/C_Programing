#include<stdio.h>

#pragma pack(1)
struct demo
{
    int no; //4
    float f ; //4
    int data; //4
    char ch; //1

};

union hello
{
    int no; //4
    float f ; //4
    int data; //4
    char ch; //1

};

int main()
{
    struct demo obj1;
    union hello hobj;

    printf("Size of union object is : %d \n",sizeof(hobj));
    printf("Size of structure is : %d \n",sizeof(obj1));

    hobj.no=11;
    printf("%d \n",hobj.no); //11
    hobj.data=21;
    printf("%d \n",hobj.no); //21
    printf("%d \n",hobj.data); //21

    return 0;
}
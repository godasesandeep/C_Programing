#include<stdio.h>
#pragma pack(1) //memory allocate/assign in multiple of 1 bytes -->1,2,4,8

struct student
{
    int roll_no;    //4
    char division;  //1
    int age;        //4
    float marks;    //4
    int salary;      //4

};

int main()
{

    struct student Amit;

    printf("Size of object is : %d ",sizeof(Amit));  //20

    return 0;
}
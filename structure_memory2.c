#include<stdio.h>


struct memory12
{
    int a;
    char b;
    char c;
    int d;

};

struct memory16
{
    int a;
    char b;
    int d;
    char c;

}obj1;

struct memory24
{
    double a;
    char b;
    int d;
    double c;

}obj2;

int main()
{

    struct memory12 obj;

    printf("Size of memory12 structure is : %d \n",sizeof(obj));
    printf("Size of memory16 structure is : %d \n",sizeof(obj1));
    printf("Size of memory24 structure is : %d \n",sizeof(obj2));
}
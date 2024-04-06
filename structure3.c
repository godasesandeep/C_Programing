#include<stdio.h>


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
    struct student Pooja;


    printf("Size of object is : %d ",sizeof(Amit));  //20

    Amit.roll_no=11;
    Amit.division='A';
    Amit.marks=90.89;
    Amit.age=19;
    Amit.salary=21000;

    Pooja.roll_no=21;
    Pooja.division='D';
    Pooja.marks=93.67;
    Pooja.age=17;
    Pooja.salary=5000;

    printf("Age of amit is : %d \n",Amit.age);
    printf("Age of Pooja is : %d \n",Pooja.age);
    printf("Salary of amit is : %d \n",Amit.salary);
    printf("Salary of pooja is : %d \n",Pooja.salary);

    return 0;
}
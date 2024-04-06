#include<stdio.h>


int main()
{
    printf("Print using For loop \n");

    for(int i=0;i<5;i++)
    {
        printf("Jay Ganesh \n");
    }

    printf("Print using while loop \n");
    int ctr=0;
    while(ctr<5)
    {
        printf("Jay Ganesh \n");
        ctr++;
    }

    printf("Print by using Do while loop \n");
    int count =0;
    do
    {
        printf("Jay Ganesh \n");
        count++;
    }while(count<5);

    return 0;
}
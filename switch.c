#include<stdio.h>

int main()
{
    int std;
    printf("Enter standard \n");
    scanf("%d",&std);
    switch(std)
    {
        case 1 :
            printf("your exam is at 7AM \n");
            break;
        case 2:
            printf("your exam is at 8AM \n");
            break;
        case 3:
            printf("your exam is at 9AM \n");
            break;
        case 4:
            printf("your exam is at 10AM \n");
            break;
        default:
            printf("Wrong choise \n");

    }


    return 0;
}
#include<stdio.h>


int main()
{
    int index=9;

    for(int i=0;index>i;i++)
    {
        printf("Index  : %d \n",i);
        if(i==index-7)
            printf("Index and i is equal to : %d \n",i);
    }

    return 0;
}
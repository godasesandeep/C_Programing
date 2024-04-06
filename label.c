#include<stdio.h>


int main()
{
    int i=1;
    main1:
        printf("Function name is used as label name\n");
    i++;
    if(i==2)
        goto i;
    goto main1;
    i:
        printf("Variable name is used as label name\n");

    return 0;
}
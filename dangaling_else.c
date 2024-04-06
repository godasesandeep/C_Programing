#include<stdio.h>


int main()
{
    int a=10,b=20;
    if(a==100)
    if(b==20)
        printf("Match-1");
    else
    printf("Match-2");

// first interpretation of above code -but no o/p  
    if(a==100)
        if(b==20)
            printf("Match-1");
    else
        printf("Match-2"); //o/p may be interpreted as --> Match-2


// Second interpretation of above code -but no o/p
    if(a==100)
        if(b==20)
            printf("Match-1");
        else
            printf("Match-2");

    return 0;
}
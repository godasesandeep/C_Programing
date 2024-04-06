#include<stdio.h>
#include<conio.h>

int main()
{
    int num,max,min;
    char choice;
    printf("Enter number \n");
    scanf("%d",&num);
    max=min=num;
    printf("Want to enter more no \n");
    choice =getche();
    printf("\n");
    while(choice=='y'|| choice=='Y') //warning: comparison between pointer and integer
                                    //if written in double quote while(choice=="y"|| choice=='Y')
    {
           
        printf("Enter number ");
        scanf("%d",&num);
        if (num>max)
            max=num;
        else
            if(num<min)
                min=num; 
        
        printf("Want to enter more no \t");
        choice =getche();
        printf("\n");
    }
    printf("Max number =%d and min number= %d",max,min);
    
    return 0;
}
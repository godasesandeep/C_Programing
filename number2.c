#include<stdio.h>
// price of ticket for 0-4 age =0,4-10=900,age 11-50=200,age 51 and above is 500.
int ticketPrice(int age)
{
    if(0<=age&&age<=4)
    {return 0;}
    else if(4<age&&age<=10)
    {return 900;}
    else if(10<age&&age<=50)
    {return 2000;}
    else{return 500;}
}

int main()
{
    int age=0;
    int ans=0;
    printf("Enter the age: \n");
    scanf("%d",&age);
    ans = ticketPrice(age);
    printf("Ticket price for age %d is %d \n",age,ans);
    
    return 0;
}
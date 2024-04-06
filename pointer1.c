#include<stdio.h>

int main()
{
    int no =11;
    int *iptr;
    iptr =&no;
    double no1=90.9999;
    double * dptr =&no1;

    printf("Pinter value iptr is = %p \n",iptr); // store the address of variable "no"
    printf("Pinter brings value iptr is = %d \n",*iptr); //bring the value from iptr address i.e 11
    printf("value of  variable no is = %d \n",no);
    printf("change the value by using pointer referance address \n");
    *iptr=10; //change the value by using pointer referance address
    printf("value of  variable no is = %d \n",no);
    printf("Pinter size  iptr is = %d  \n",sizeof(iptr));

    printf("Pinter value dptr is = %p \n",dptr);
    printf("Pinter brings value iptr is = %f \n",*dptr);
    printf("Pinter size  dptr is = %d  \n",sizeof(dptr));

    return 0;
}
#include<stdio.h>


int main()
{

    int arr[4][5];
    arr[2][2]=11;
    arr[0][3]=21;
    arr[1][4]=51;
    arr[3][3]=101;
    arr[2][1]=111;
    arr[3][0]=121;

    int brr[7]={10,20};
    

    printf("%d \n",brr[3]);

    printf("%d \n",arr[1][4]);
    printf("%d \n",*(*(arr+3)+3));
    printf("%d \n",arr[0][0]);

    return 0;
}
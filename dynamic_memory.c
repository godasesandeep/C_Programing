#include<stdio.h>
#include<stdlib.h> //for malloc, calloc, realloc & free

int main()
{
    int arr[5]; //static memory allocation 

    int size=0;
    int * ptr=NULL;
    printf("Enter number of elements \n");
    scanf("%d",&size); //enter 6

    ptr = (int *)malloc(size*sizeof(int));
    //  =(int *)malloc(6*4)

    //Use the memory

    free(ptr);

    return 0;

}
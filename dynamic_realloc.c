#include<stdio.h>
#include<stdlib.h> //for malloc, calloc, realloc & free

int main()
{
    int arr[5]; //static memory allocation 

    int size=0;
    int * ptr=NULL;
    

    ptr = (int *)malloc(5*sizeof(int));

    //Use the memory

    ptr=(int *)realloc(ptr,10*sizeof(int));

    free(ptr);

    return 0;

}
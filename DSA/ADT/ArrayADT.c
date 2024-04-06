#include<stdio.h>
#include<stdlib.h>

struct my_arr
{
    int total_size;
    int used_size;
    int *ptr;
};

void create_array(struct my_arr * my_arr_obj,int tsize,int usize)
{
    my_arr_obj->total_size=tsize;
    my_arr_obj->used_size=usize;
    my_arr_obj->ptr=(int *) malloc(tsize*sizeof(int));
}

void setValue(struct my_arr *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        printf("Enter the %d th value of arr : \n",i+1);
        scanf("%d",&(a->ptr[i]));
    }
}

void show(struct my_arr *a)
{
    for(int i=0;i<a->used_size;i++)
    {
        printf("%d  ",a->ptr[i]);
    }
    printf("\n");
}

int main()
{

    struct my_arr obj;
    create_array(&obj,10,2); //create_arr(adress_object,total_size,used_size);
    setValue(&obj);
    show(&obj);

    return 0;
}
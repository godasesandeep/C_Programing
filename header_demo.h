struct demo
{
    int no;
    int x;
};


#define PI 3.33

int sum(int a, int b)
{
    return a+b;
}

void swap(int * ptr1,int * ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
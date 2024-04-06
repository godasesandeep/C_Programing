#include<stdio.h>
#include<string.h>

struct int_str
{
    int num;
    char crr[30];
    int arr[2];

};


int main()
{
    struct int_str obj;

    //obj={10,"Ashwini bai",11,12}  //not allowed after above intalization
    struct int_str obj2={100,"Ashwini bai....ok",110,120};

    obj.num=11;
    strcpy(obj.crr,"Ashwini bai");
    //obj.crr="Ashwini bai"   //not allowed
    obj.arr[0]=11;
    obj.arr[1]=12;


    printf("%s \n",obj.crr);
    printf("%d \n",obj.arr[0]);
    printf("%d \n",obj2.arr[0]);

    struct int_str obj3;
    obj3=obj2; // we can assign one object to other object
    printf("%s \n",obj3.crr);

    return 0;
}
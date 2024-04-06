#include<stdio.h>

int binary_search(int arr[],int element,int size)
{

    int low=0,high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }   
        else if(arr[mid]>element)
            {
                high=mid-1;
            }
        else
        {
            low =mid+1;
        }
    }
    return -1;

}



int main()
{
    int arr[100]={10,20,30,40,50,60,70};
    int size=7,element=100,found_index=0;

    found_index=binary_search(arr,element,size);
    printf("Element found at index : %d \n",found_index);

    return 0;
}
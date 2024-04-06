#include <stdio.h>

int isPalindrome(int x) {
    int r=0,n=0,k=0;
    if(x<0)
    {
        return 0;
    }
    else
    {
        k=x;
        while(k!=0)
        {
            
            r=k%10;
            n=n*10+r;
            k=(k-r)/10;
        }
        if(n==x)
        {
            return 1;
        }  
        else
        {
            return 0;
        } 

    }
}
int main() {
 
    int a=121;
    printf("%d",isPalindrome(a));

    return 0;
}
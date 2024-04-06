#include<stdio.h>


int main()

{
    int i=0,j=1,k=2,l;
    l=i&&j++&&k++;
    /*
    The expression l=i&&j++&&k++ is interpreted 
    as l=(i&&j++)&&k++. Since i is false, j++ will not 
    be evaluated and (i&&j++) evaluates to 0 (i.e. 
    false). Since (i&&j++) is false, k++ will not be 
    evaluated and the expression i&&j++&&k++
    evaluates to 0, i.e. false. So, 0 is assigned to l
    */
    printf("Resultant values after evaluation are:\n");
    printf("%d %d %d %d",i ,j,k,l); //0 1 2 0
}
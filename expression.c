#include<stdio.h>

int main()
{
 float a;
 float b,c;
 float d=2;
 c=9/d; // 9 is int type /2 is float type ==>becomes 4.5 float 
 b=9/2;// 9 is int type /2 is int type ==>4.5 float becomes 4 as int type
 a=2*3.25+((3+6)/2);
 printf("The result of evaluation is %f %f %f",a,b,c);
 return 0;
}
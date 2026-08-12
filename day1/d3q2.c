/*
Q6: Write a program to swap two numbers using a third variable.
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
int main()
{
float a,b,x;
printf("enter the value of a:\n");
scanf("%f",&a);
printf("enter the value of b:\n");
scanf("%f",&b);
x=a;
a=b;
b=x;
printf("the value of a is %f\n",a);
printf("the value of b is %f\n",b);
return 0;
}

/*Q7: Write a program to swap two numbers without using a third variable.

Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>
int main()
{
    float a,b;
    printf ("enter the value of a:\n");
    scanf("%f",&a);
    printf ("enter the value of b:\n");
    scanf ("%f", &b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf ("the value of a is %f\n",a);
    printf ("the value of b is %f\n",b);
    return 0;
}

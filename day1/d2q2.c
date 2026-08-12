/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/
#include <stdio.h>
#define pi 3.141596535897
int main()
{
float radius, area, circum;
printf("enter radius of the circle: \n");
scanf("%f", & radius);
area = pi * radius * radius;
circum = 2 * pi * radius;
printf("area of the circle is: %0.4f\n", area);
printf("circumference of the circle is: %0.4f\n", circum);
return 0;
}

//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,s1,s2,s3;
    float ar;
    printf("Enter the coordinates of the first point (x1, y1):");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2):");
    scanf("%d %d", &x2, &y2);
    printf("enter the coordinates of the third point (x3, y3):");
    scanf("%d %d", &x3, &y3);
    ar =0.5* (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    if (ar==0)
    {
       printf("invalid triangle");
    }
    else if (ar!=0)
    {
       printf("valid triangle");
       s1= x3-x2;
       s2= x3-x1;
        s3= x2-x1;
        if (s1==s2 && s2==s3)
        {
            printf("the triangle is equilateral");
        }
        else if (s1==s2 || s2==s3 || s1==s3)
        {
            printf("the triangle is isosceles");
        }
        else
        {
            printf("the triangle is scalene");
        }
    }
    return 0;
}

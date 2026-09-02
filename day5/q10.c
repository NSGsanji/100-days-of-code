/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main()
{
    int i,s,m,h;
    printf("Enter the time in seconds: ");
    scanf("%d",&i);
    h=i/3600;
    m=(i%3600)/60;
    s=(i%3600)%60;
    printf("Time in hours, minutes and seconds is: %d:%d:%d",h,m,s);
    return 0;
}

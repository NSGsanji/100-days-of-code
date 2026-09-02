//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
    int main()
    { 
        int n,rem,reverse=0,og;
        printf("Enter a number:");
        scanf("%d",&n);
        og=n;
        while(n!=0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n = n/10;
        }
        if(reverse==og)
        {
            printf("The number is a palindrome");
        }
        else
        {
            printf("The number is not a palindrome");
        }
        return 0;
    }

//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
char main()
{
    char ch;
    printf("enter character:");
    scanf("%c", &ch);
    if (ch>='a'&&ch<='z')
    {
        printf("entered character is a lowercase alphabet");
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("entred character is an uppercase alphabet");
    }
    else if (ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&')
    {
        printf("entered character is a special character");
    }
    else if (ch>='0'&&ch<='9')
    {
         printf("entered character is a number");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}

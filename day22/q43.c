//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main()
{
    int n, original, r;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n >= 1)
    {
        r = n % 10;
        n = n / 10;

        int factorial = 1;

        for (int i = 1; i <= r; i++)
        {
            factorial *= i;
        }

        sum += factorial;
    }

    if (sum == original)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }

    return 0;
}

//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter the operation to be performed (+, -, *, /): ");
    char op;
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
            c = a + b;
            printf("The sum is: %d", c);
            break;
        case '-':
            c = a - b;
            printf("The difference is: %d", c);
            break;
        case '*':
            c = a * b;
            printf("The product is: %d", c);
            break;
        case '/':
            if (b != 0)
            {
                c = a / b;
                printf("The quotient is: %d", c);
            }
            else
            {
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Invalid operation");
    }
    return 0;
}

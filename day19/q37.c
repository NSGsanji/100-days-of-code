//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int a, b, x;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        x = a;
    else
        x = b;

    while (1) {
        if (x % a == 0 && x % b == 0) {
            printf("%d", x);
            break;
        }
        x++;
    }

    return 0;
}

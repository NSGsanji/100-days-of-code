//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main() {
    int num, o, x;
    int digit, digits = 0;
    int sum = 0, power, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    o = num;
    x = num;
    while (x > 0) {
        digits++;
        x = x / 10;
    }
    x = num;
    while (x > 0) {
        digit = x % 10;

        power = 1;

        for (i = 1; i <= digits; i++) {
            power = power * digit;
        }
        sum = sum + power;
        x = x / 10;
    }
    if (sum == o)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}

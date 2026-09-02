/*
  Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0, power = 1, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;

    middle = (num % power) / 10;

    int result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit: %d", result);

    return 0;
}

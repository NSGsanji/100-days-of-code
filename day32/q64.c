//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    long long int num;
    int digit, count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    printf("Enter the digit to check: ");
    scanf("%d", &digit);
    if (num < 0)
        num = -num;

        if (num == 0) {
        if (digit == 0)
            count = 1;
    } else {
        while (num > 0) {
            if (num % 10 == digit)
                count++;
            num /= 10;
        }
    }
    printf("The digit appears %d times.\n",count);
    return 0;
}

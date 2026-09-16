//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int a, i;
    int isPrime = 1; 

    printf("Enter a number: \n");
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not prime\n");
    } 
    else {
        
        for (i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                isPrime = 0;
                break;       
            }
        }

        if (isPrime == 1) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }

    return 0;
}

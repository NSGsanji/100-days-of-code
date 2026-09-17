//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

int main() {
    int x, y, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &x);

    int arr1[x];

    printf("Enter elements of first array:\n");
    for (i = 0; i < x; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &y);

    int arr2[y];
    int merged[x + y];

    printf("Enter elements of second array:\n");
    for (i = 0; i < y; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < x; i++) {
        merged[i] = arr1[i];
    }

    for (i = 0; i < y; i++) {
        merged[x + i] = arr2[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < x + y; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

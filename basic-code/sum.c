#include <stdio.h>

int main() {
    int n, i, sum = 0, number;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }

    printf("Sum of the numbers: %d\n", sum);
    return 0;
}
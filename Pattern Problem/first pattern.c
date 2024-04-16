#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Handle invalid input (n should be positive)
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Inner loop for printing numbers
        num = i;  // Start with row number for each row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d", num);
            if (j <= i) {
                num++;
            } else {
                // Decrement by 2 for bottom half (0 for the middle number)
                num = num > i ? num - 2 : num;
            }
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for rows
    for (i = 1; i <= n; i++) {

        // Print leading spaces
        spaces = n - i;
        for (int k = 0; k < spaces; k++) {
            printf(" ");
        }

        // Print the pattern
        for (j = 0; j < i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}

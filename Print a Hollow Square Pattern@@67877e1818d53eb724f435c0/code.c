#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("");
    scanf("%d", &n);

    // Generating the hollow square pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' for first & last row, and first & last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf(" ");  // Print space inside the square
            }
        }
        printf("\n");  // Move to the next line after printing a row
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Generating the pyramid pattern
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");  // Move to the next line after printing a row
    }

    return 0;
}

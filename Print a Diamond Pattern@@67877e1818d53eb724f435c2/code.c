#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("");
    scanf("%d", &n);

    // Printing the upper half of the diamond
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

    // Printing the lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
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

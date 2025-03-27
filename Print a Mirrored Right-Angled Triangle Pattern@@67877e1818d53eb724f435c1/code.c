#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("");
    scanf("%d", &n);

    // Generating the mirrored right-angled triangle
    for (int i = 1; i <= n; i++) {
        // Printing spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");  // Move to the next line after printing a row
    }

    return 0;
}

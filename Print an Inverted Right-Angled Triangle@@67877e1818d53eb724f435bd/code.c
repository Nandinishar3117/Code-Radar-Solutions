#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Generating the pattern
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line after printing stars
    }

    return 0;
}

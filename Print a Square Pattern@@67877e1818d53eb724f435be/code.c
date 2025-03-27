#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf(" ");
    scanf("%d", &n);

    // Generating the square pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line after printing a row
    }

    return 0;
}

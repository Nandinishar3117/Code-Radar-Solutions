#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf("");
    scanf("%d", &n);

    // Generating the reverse numeric right-angled triangle
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");  // Move to the next line after printing a row
    }

    return 0;
}

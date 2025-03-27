#include <stdio.h>

int main() {
    int n;

    // Input from user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print the pattern
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

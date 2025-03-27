#include <stdio.h>

int main() {
    int n;

    // Taking user input
    printf(" ");
    scanf("%d", &n);

    // Generating the pyramid pattern
    for (int i = 1; i <= n; i++) {
      
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}

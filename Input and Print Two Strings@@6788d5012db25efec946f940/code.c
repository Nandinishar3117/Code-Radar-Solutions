#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    char b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("You entered: %s and %s",a,b);
}
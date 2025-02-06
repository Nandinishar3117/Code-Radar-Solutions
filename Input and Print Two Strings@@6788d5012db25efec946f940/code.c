#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    char b;
    scanf("%s",&a);
    scanf("%s",&b);
    printf("You entered: %s",a,b);
}
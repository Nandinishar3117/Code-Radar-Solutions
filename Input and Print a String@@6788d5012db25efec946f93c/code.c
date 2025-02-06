#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char f[100];
    scanf("%s",&f);
    printf("You entered: %s",f);
}
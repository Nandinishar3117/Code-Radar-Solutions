#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    char b;
    scanf("%s",&a);
    scanf("%s",&b);
    print("You entered: %s",a,b);
}
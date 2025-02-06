#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float radius;
    float pi=3.14;
    
    scanf("%f",&radius);
    printf("Area: %.2f",pi*2*radius);
}
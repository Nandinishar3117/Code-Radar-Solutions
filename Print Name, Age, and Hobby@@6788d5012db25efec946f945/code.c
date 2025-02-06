#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    
    char c[100];
    int age;
    char hobby[100];
    scanf("%c",&c);
    scanf("%d",&age);
    scanf("%c",&hobby);
    printf("Name: %c",c);
    printf("Age: %d",age);
    printf("Age: %d",hobby);
}
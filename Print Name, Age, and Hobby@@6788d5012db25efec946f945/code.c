#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    
    char c[100];
    int age;
    char hobby[100];
    scanf("%s",&c);
    scanf("%d",&age);
    scanf("%s",&hobby);
    printf("Name: %s",c);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);
}
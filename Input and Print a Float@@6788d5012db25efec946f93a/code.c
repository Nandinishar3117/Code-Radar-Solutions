#include <stdio.h>

char* welcome() {
    float f;
    scanf("%f",&f);
    printf("%f",f)
}

int main() {
    printf("%s", welcome());
    return 0;
}
#include <stdio.h>

int main() {
    int decimal;
    char hex[100];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    sprintf(hex, "%X", decimal);

    printf("Hexadecimal equivalent: %s\n", hex);

    return 0;
}
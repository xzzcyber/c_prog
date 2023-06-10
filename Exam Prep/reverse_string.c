//Program to print reverse of the string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
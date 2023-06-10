#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("addition.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);

    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);
    int add = a+b;
    fptr = fopen("addition.txt", "w");

    fprintf(fptr, "%d", add);

    fclose(fptr);
    return 0;
}

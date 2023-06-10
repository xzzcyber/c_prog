#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("odd_create.txt", "w");

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            fprintf(fptr, "%d\n", i);
        }
    }

    printf("\n");
    fclose(fptr);
    return 0;
}

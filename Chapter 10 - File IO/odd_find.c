#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("odd.txt", "r");

    int n, num;

    printf("Enter Number: ");
    scanf("%d", &n);

    if (fptr == NULL) {
        printf("File doesn't exist");
    }
    else {
        for (int i = 0; i < n; i++) {
            if (fscanf(fptr, "%d", &num) == EOF) {
                printf("File does not contain enough numbers.");
                break;
            }
            if (num % 2 != 0) {
                printf("%d ", num);
            }
        }
    }

    printf("\n");
    fclose(fptr);
    return 0;
}

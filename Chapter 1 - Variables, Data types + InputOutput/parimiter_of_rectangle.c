#include<stdio.h>

int main() {
    int height, width;
    printf("Input Hight Value \n");
    scanf("%d", &height);
    printf("Input Width Value \n");
    scanf("%d", &width);

    int parimeter = 2 * (height+width);
    printf("Area Is %d\n", parimeter);
    return 0;
}
#include <stdio.h>

int pow(int a, int b);

int main() {
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    
    printf("Enter the power: ");
    scanf("%d", &b);
    
    int result = pow(a, b);
    printf("The result is: %d\n", result);
    
    return 0;
}

int pow(int a, int b) {
    int power = 1, i;
    for (i = 1; i <= b; i++) {
        power = power * a;
    }
    return power;
}
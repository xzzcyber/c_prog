#include <stdio.h>

void fare_calculate(int age, float fare);

int main() {
    int age;
    float fare;

    printf("Enter the age of the passenger: ");
    scanf("%d", &age);

    printf("Enter the air ticket fare: ");
    scanf("%f", &fare);

    fare_calculate(age, fare);

    return 0;
}

void fare_calculate(int age, float fare) {
    if (age < 14) {
        fare = fare - 0.5 * fare;
    } else if (age <= 50) {
        fare = fare - 0.1 * fare;
    } else {   
        fare = fare - 0.2 * fare;
    }

    printf("Air ticket fare to be charged after discount is %.2f\n", fare);
}

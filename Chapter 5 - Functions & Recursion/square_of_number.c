#include<stdio.h>
#include<math.h>
void square(int num); 

int main(){
    int num;
    printf("Enter The Number - ");
    scanf("%d", &num);
    
    printf("The Number Is - %d \n", num);
    square(num);
    return 0;
}

void square(int num){
    num = pow(num,2);
    printf("The Square of The Given Number Is - %d", num);
}
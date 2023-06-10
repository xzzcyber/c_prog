#include<stdio.h>

int sumDigits(int n, int sum);

int main(){
    int n, sum = 0, m;
    
    printf("Input The Number - ");
    scanf("%d", &n);
    sum = sumDigits(n, sum);
    printf("Sum Is - %d", sum);
    return 0;
}

int sumDigits(int n, int sum){
    if(n != 0){
        while(n > 0){
            int m = n % 10;
            sum = sum + m;
            n = n/10;
        }
        return sum;
    }
    return sum;
};

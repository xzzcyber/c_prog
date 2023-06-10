#include <stdio.h>
int main(){
    int number, square, cube;
    printf("Enter any of The Values (1-4) \n");
    scanf("%d", &number);

    switch (number){
    case 1 :
        printf("Enter The No To Calculate The Square \n");
        scanf("%d", &square);
        printf("%d", square * square);
        break;
    case 2 :
        printf("Enter The No To Find Its Cube \n");
        scanf("%d", &cube);
        printf("%d", cube * cube * cube);
        break;
    case 3 :
        printf("Enter The No To Find Its Cube \n");
        scanf("%d", &cube);
        printf("%d", cube * cube * cube);
        break;
    case 4 :
        printf("Enter The No To Find Its Cube \n");
        scanf("%d", &cube);
        printf("%d", cube * cube * cube);
        break;
    default:
        printf("No Case Found, The Entered No Is : %d", number);
    }
}
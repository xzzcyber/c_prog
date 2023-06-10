#include <stdio.h>

int main(){
int num;

printf("Please enter A Value :- ");
scanf("%d", &num);

int *ptr = &num;
int **pptr = &ptr;

//Printing Address Location --
printf("The Value Is :- %d", **pptr);

return 0;
}
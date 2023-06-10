#include <stdio.h>

int main(){
int age;

printf("Please enter your age :- ");
scanf("%d", &age);

int *ptr = &age;
int _age = *ptr;

printf("The Ans Is - %d \n", _age);

//Printing Address Location --
printf("Pointer Location - %u \n", &age);
printf("Pointer Value - %u \n", ptr);
printf("Pointer Location - %u \n", &ptr);

//Printing Value --
printf("Age Value - %d \n", age);
printf("Pointer Value - %d \n", *ptr);

//Printing Value 2 in 1
printf("Pointer Value - %d \n", *(&ptr));

return 0;
}
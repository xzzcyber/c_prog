#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("write.txt", "w");

    char name[100];
    int age;
    float cgpa;
   
    printf("Enter Name : - ");
    scanf("%s", name);
    printf("Enter Age : - ");
    scanf("%d", &age);
    printf("Enter CGPA : - ");
    scanf("%f", &cgpa);
    
    fprintf(fptr, "Student Name :- %s\n", name);
    fprintf(fptr, "Student Age :- %d\n", age);
    fprintf(fptr, "Student CGPA :- %f", cgpa);

    fclose(fptr);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[100], size, extra;

    printf("Enter The Size Of The Array (Max 100) :- ");
    scanf("%d",&size);

    printf("Enter The Elements Of The Array :- \n");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Insert The Last Element To Add In This Array :- ");
    scanf("%d", &extra);

    size = size + 1;
    arr[size - 1] = extra;
    printf("After Inserting The Value The New Array Is \n");
    for (int i = 0; i < size; i++){
        printf("%d \t", arr[i]);
    }
}
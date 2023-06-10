#include <stdio.h>

void deleteElement(int arr[], int size, int position);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int position;
    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &position);
    deleteElement(arr, size, position);
    return 0;
}

void deleteElement(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Element deleted successfully!\n");
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
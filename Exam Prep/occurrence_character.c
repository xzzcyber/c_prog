#include <stdio.h>

int main() {
    char str[100];
    int occurrences[26] = {0}; // Array to store the count of each character (assuming only lowercase alphabets)
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            occurrences[str[i] - 'a']++;
        }
    }

    // Print the occurrences
    printf("Occurrences of each character:\n");
    for (int i = 0; i < 26; i++) {
        if (occurrences[i] > 0) {
            printf("%c - %d time(s)\n", 'a' + i, occurrences[i]);
        }
    }

    return 0;
}
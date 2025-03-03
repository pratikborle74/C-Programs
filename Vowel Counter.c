// Create a C program to read a text file and count and display the total number of vowels present in the file.
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int vowel_count = 0;
    char filename[100];

    // Ask for the file name
    printf("Enter the name of the text file: ");
    scanf("%s", filename);

    // Open the file
    file = fopen(filename, "r");

    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and count vowels
    while ((ch = fgetc(file)) != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        }
    }

    fclose(file);

    // Output the count
    printf("Total number of vowels: %d\n", vowel_count);

    return 0;
}

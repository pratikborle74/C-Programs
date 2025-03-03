// Create a C program that counts the frequency of each character in a string using pointers and displays the results.
#include <stdio.h>
int main() {
char str[100], *ptr;
int frequency[256] = {0};

printf("Enter a string: ");
gets(str);

ptr = str;
while (*ptr != '\0') {
frequency[*ptr]++;
ptr++;
}

printf("\nCharacter frequencies:\n");
for (int i = 0; i < 256; i++) {
if (frequency[i] > 0) {
printf("%c: %d\n", i, frequency[i]);
}
}
return 0;
}
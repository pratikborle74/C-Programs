//Develop C a program that takes an integer as input from the user and prints its reverse.
#include <stdio.h>
int main() {
int number, reversedNumber = 0, remainder;
printf("Enter an integer: ");
scanf("%d", &number);
int originalNumber = number;
while (number != 0) {
remainder = number % 10;
reversedNumber = reversedNumber * 10 + remainder;
number /= 10;
}
printf("The reverse of %d is %d.\n", originalNumber, reversedNumber);
return 0;
}

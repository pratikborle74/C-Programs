// Develop a quiz application that asks multiple-choice questions and calculates the score for user using C programming.
#include <stdio.h>

int main() {
    int score = 0;
    char ans1, ans2, ans3, ans4;

    printf("Welcome to the C Programming Quiz\n");

    // Question 1
    printf("\nQuestion 1: Which of the following is the correct way to declare a constant in C?\n");
    printf("A. constant int x; \n B. const int x; \n C. int constant x; \n D. const x int;\n");
    scanf(" %c", &ans1);
    if (ans1 == 'B') score++;

    // Question 2
    printf("\nQuestion 2: Which operator is used to access the value of a pointer in C?\n");
    printf("A. * \n B. & \n C. -> \n D. ++\n");
    scanf(" %c", &ans2);
    if (ans2 == 'A') score++;

    // Question 3
    printf("\nQuestion 3: Which of the following is used to allocate memory dynamically in C?\n");
    printf("A. malloc() \n B. free() \n C. calloc() \n D. delete()\n");
    scanf(" %c", &ans3);
    if (ans3 == 'A') score++;

    // Question 4
    printf("\nQuestion 4: What is the correct syntax for defining a function in C?\n");
    printf("A. int function() \n B. function() int \n C. void function() \n D. function int()\n");
    scanf(" %c", &ans4);
    if (ans4 == 'C') score++;

    // Question 5
    printf("\nQuestion 5: Which of the following is used for conditional branching in C?\n");
    printf("A. if \n B. switch \n C. for \n D. A and B\n");
    scanf(" %c", &ans4);
    if (ans4 == 'D') score++;

    // Final score display
    printf("\nCongratulations! Your score is %d\n", score);

    return 0;
}
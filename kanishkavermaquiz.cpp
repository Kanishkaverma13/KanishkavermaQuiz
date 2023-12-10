#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to store a question, its options, and the correct answer
struct question {
    char question[100];
    char option1[20];
    char option2[20];
    char option3[20];
    int correct;
};

// Initialize an array of questions
struct question questions[5] = {
    {"C language was developed by__.", "Dennis Rechard", "Dennis M. Ritchie", "Bjarne Stroustrup", "Anders Hejlsberg", 2},
    {"In which year was C language developed?", "1962", "1978", "1979", "1972",4},
    {"Which is not a valid keyword in C language?", "for", "whhile", "do-while", "switch",3},
    {"The C source file is processed by the__.", "Interpreter", "Compiler", "Both Interpreter and Compiler", "Assembler",2},
    {"What is the extension of a C language source file?", ".c", ".cpp", ".c99", ".h",1},
 };

int main() {
    int i, answer, score = 0;
    // Loop through the questions array
    for (i = 0; i < 5; i++) {
        // Display the question and the options
        printf("\n%s\n", questions[i].question);
        printf("1) %s\n", questions[i].option1);
        printf("2) %s\n", questions[i].option2);
        printf("3) %s\n", questions[i].option3);
        printf("4) %s\n", questions[i].option4);
        // Get the user's answer
        printf("\nEnter your answer: ");
        scanf("%d", &answer);
        // Check if the answer is correct and update the score
        if (answer == questions[i].correct) {
            printf("Correct!\n");
            score++;
        }
        else {
            printf("Wrong!\n");
        }
    }
    // Display the final score and the correct answers
    printf("\nYour final score is %d out of 5.\n", score);
    printf("\nThe correct answers are:\n");
    for (i = 0; i < 5; i++) {
        printf("%s %s\n", questions[i].question, questions[i].option1 + (questions[i].correct - 1) * 20);
    }
    return 0;
}


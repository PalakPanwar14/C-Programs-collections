#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Very Good!\n");
            break;
        case 'C':
            printf("Good!\n");
            break;
        case 'D':
            printf("Passed but need improvement.\n");
            break;
        case 'F':
            printf("Failed. Better luck next time!\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    return 0;
}
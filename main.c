#include <stdio.h>


const char PLEASE_ENTER_NUMBER[] = "Please enter number:";
const char PLEASE_ENTER_CHOICE[] = "Please enter your choice:";

int getInputNumber(char *message) {
    printf("%s", message);

    int number;
    scanf("%d", &number);
    return number;
}

int displayConsole() {
    printf("1.Print Username by age\n");
    printf("2.Generate number with pattern\n");
    printf("3.Print multiplication table with given number\n");
    printf("0.Exit\n");
    return getInputNumber(PLEASE_ENTER_CHOICE);
}

void printUserNameByAge(int age) {
    for (int i = 0; i < age; i++) {
        printf("Viet %d\n", i);
    }
}

void printNumberWithPattern(int number) {
    for (int a = 1; a <= number; a++) {
        for (int b = 1; b <= a; b++) {
            printf("%d ", b);
        }
        printf("\n");
    }
}

void printMultiplicationWithGivenNumber(int number) {
    int maxMultiply = 10;
    for (int a = 0; a <= maxMultiply; a++) {
        printf("%d * %d = %d\n", number, a, number * a);
    }
}

int main() {
    while (1) {
        int chosenNumber = displayConsole();
        switch (chosenNumber) {
            case 1:
                printUserNameByAge(getInputNumber(PLEASE_ENTER_NUMBER));
            break;
            case 2:
                printNumberWithPattern(getInputNumber(PLEASE_ENTER_NUMBER));
            break;
            case 3:
                printMultiplicationWithGivenNumber(getInputNumber(PLEASE_ENTER_NUMBER));
            break;
            case 0:
                printf("Bye");
            return 0;
            default:
                printf("\n");
            printf("Wrong choice please try again\n");
        }
    }
}

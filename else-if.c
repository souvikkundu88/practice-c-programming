#include <stdio.h>

int main() {
    int number;
    printf("enter an integer: ");
    scanf ("%i", &number);
    if (number < 0) {
        printf("the integer %d is negative\n", number);
    }
    else if (number > 0) {
        printf("the integer %d is positive\n", number);
    }
    else if (number == 0) {
        printf("the integer %d is zero\n", number);
    }
    else {
        printf("this statement should never be executed!\n");
    }
}




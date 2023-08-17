#include <stdio.h>

int main() {
    int number = 1;
    printf("Multiplication Table for 6\n");
    do {
        printf("6 x %d = %d\n", number, 6*number);
        number++;
    }
    while (number <= 10);
}
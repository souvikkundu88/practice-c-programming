#include <stdio.h>

int main() {
    int totalSum = 0;
    int i = 0;
    for (i=0; i <= 100; i++) {
        totalSum = totalSum + i;
    }
    printf("total sum of digits to 100 is %d\n", totalSum);
}

#include <stdio.h>

int main() {
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i <= 20; i++){
        sum1 = sum1 + 1;
        if(i + 5 >= 20){
            break;
        }
        if(i % 3 == 0){
            sum2++;
        }
    printf("sum1 %d\n", sum1);
    printf("sum2 %d\n", sum2);

    }
}

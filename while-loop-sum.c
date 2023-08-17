#include <stdio.h>

int main() {
  int totSum = 0;
  int i = 0;
  while (i <= 100) {
    totSum = totSum + i;
    i++;
  }
  printf("the total sum is: %d\n", totSum);
}

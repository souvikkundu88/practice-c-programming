#include <stdio.h>
 
int main(int argc, char **argv)
{
  //your code goes here 
  int i;
  for (i=1; i <= 10; i++) {
    if((i % 3) == 0) {
      printf("Fizz\n");
    } else if ((i % 5) == 0) {
      printf("Buzz\n");
    } else {
      printf("FizBuzz\n");
    }
  }
  return 0;
}
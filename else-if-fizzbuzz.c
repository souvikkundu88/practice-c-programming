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

// alternate (better) solution

/*
#include <stdio.h>
 
int main(int argc, char **argv)
{
  int i;
  for (i=1; i<=100; i++)
 {
    //if the number divides, remainder will be 0 
    // we use the ! to change it to 1 so that the overall condition 
    //becomes TRUE
      if (!(i % 3) && !(i % 5)) //checking if it divides by 3 AND 5 by taking % (modulus)
	printf("FizzBuzz");   
      else if (!(i % 3)) //checking if it divides by just 3 
	printf("Fizz");
      else if (!(i % 5)) //checking if it divides by just 5
	printf("Buzz");
      else
	printf("%d", i);
      printf("\n");
 }
  return 0;
}

*/
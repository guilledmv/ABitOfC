// We need include the library stdio
#include <stdio.h>
// Variables ready for use in C
// Constant for use in some code
#define PI 3.1416

int main() {
  int n = 3; // it's a integer value, which is initialized with 3
  double y = 2.4; // it's a real value, which is initialized with 2.4
  float x = 4.12; // it's a real value, which is initialized with 4.12
  // Main diference between double and float is the range of memory
  char a = 'd'; // it's a character value, which is initialized with d
  // Besides, we print the numbers in our screen
  printf("Value of n : %i \n",n);
  printf("Value of y : %f \n Value of x : %f \n",y,x);
  printf("Value of a : %c \n",a);
  printf("Value of PI %f \n",PI);
  return 0;
  }

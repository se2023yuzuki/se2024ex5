#include <stdio.h>

int main() {
  printf("Hello, World!\n");

  int number = 1;
  printf("The number is: %d\n", number);

  for (int i = 1; i <= 5; i++) {
    printf("+ %d: The number is %d\n", i, number + i);
  }

  return 0;
}

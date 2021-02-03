// RECURSIVE FUNCTION
#include <stdio.h>
unsigned long long int factorial(unsigned int i)
{
  if (i <= 1)
    return 1;
  return i * factorial(i - 1);
}

int main()
{
  int num = 5, fact;
  fact = factorial(num);
  printf("Factorial of %d is %d\n", num, fact);
  return 0;
}
// RECURSIVE FUNCTION
// FIBONACCI SERIES

#include <stdio.h>

int fibonacci(int i)
{
  if (i <= 1)
    return i;
  return fibonacci(i - 1) + fibonacci(i - 2);
}

void main()
{
  int i, res;
  for (i = 0; i < 10; i++)
  {
    res = fibonacci(i);
    printf("%d\t\n", res);
  }
}
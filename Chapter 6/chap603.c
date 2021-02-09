// RECURSIVE FUNCTION
/* Ackermann Function */

#include <stdio.h>
int ackerman(int m, int n);

void main()
{
  int m = 1, n = 2, res;
  system("cls");
  res = ackerman(m, n);
  printf("\nAckerman Output: %d\n", res);
}

int ackerman(int m, int n)
{
  if (m == 0)
    return n + 1;
  else if (m > 0 && n == 0)
    return ackerman(m - 1, 1);
  else if (m > 0 && n > 0)
    return ackerman(m - 1, ackerman(m, n - 1));
  else
    printf("Invalid Inputs");
}
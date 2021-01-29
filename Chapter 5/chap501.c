#include <stdio.h>

void main()
{
  int a = 8, b = 3, sum;
  // Local variable

  int addFun(int, int);
  // Function Declaration

  sum = addFun(a, b);
  // Function Calling - By Value
  // Here a and b are Actual parameters

  printf("Sum = %d", sum);
}

int addFun(int x, int y)
// x and y are Formal parameters
{
  int ans;
  // Local variable
  ans = x + y;
  return ans;
}
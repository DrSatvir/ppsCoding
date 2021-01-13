// Program to explain IF-ELSE Statement
// Design a Logical AND Gate
// Design By Dr Satvir Singh
#include <stdio.h>
void main()
{
  int A, B, Y;
  printf("Input A: ");
  scanf("%d", &A);
  printf("Input B: ");
  scanf("%d", &B);
  // Method 1
  // Y = A & B;

  // Method 2
  /*
  if (A == 1 && B == 1)
    Y = 1;
  if (A == 0 && B == 1)
    Y = 0;
  if (A == 1 && B == 0)
    Y = 0;
  if (A == 0 && B == 0)
    Y = 0;
  */

  // Method3
  if (A == 0 || B == 0)
    Y = 0;
  else
    Y = 1;

  printf("Resultant is Y: %d", Y);
}
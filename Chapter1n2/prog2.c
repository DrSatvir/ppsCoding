// Program to Explain Logical Operators
#include <stdio.h>
void main()
{
  int numA, numB, numC;
  numA = 6;
  numB = 7;
  // Equality Operator
  numC = numA == numB;
  printf("numA == numB is %d\n", numC);
  // Not Equal Operator
  numC = numA != numB;
  printf("numA != numB is %d\n", numC);
  // Greater than Operator
  numC = numA > numB;
  printf("numA > numB is %d\n", numC);
  // Less than Operator
  numC = numA < numB;
  printf("numA < numB is %d\n", numC);
  // Greater than equal to Operator
  numC = numA >= numB;
  printf("numA >= numB is %d\n", numC);
  // Less than equal to Operator
  numC = numA <= numB;
  printf("numA <= numB is %d\n", numC);
}

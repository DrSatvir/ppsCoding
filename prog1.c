// Program to explain Arithmatic Operators
#include <stdio.h>
void main()
{
  int numA, numB, resultC;
  numA = 5;
  numB = 3;
  printf("Number A = %d, Number B = %d\n", numA, numB);
  resultC = numA + numB; // '+' is an Add Operator
  printf("numA + numB is %d\n", resultC);
  resultC = numA - numB; // '-' is an Subtraction Operator
  printf("numA - numB is %d\n", resultC);
  resultC = numA * numB; // '*' is an Multiplying Operator
  printf("numA * numB is %d\n", resultC);
  resultC = numA / numB; // '/' is an Division Operator
  printf("numA / numB is %d\n", resultC);
  resultC = numA % numB; // '%' is an Modulus Operator
  printf("numA modulus numB is %d\n", resultC);
}

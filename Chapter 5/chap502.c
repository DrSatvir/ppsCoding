#include <stdio.h>
main()
{
  int a = 10, b = 20;
  void myFun(int *x, int *y);

  printf("\nBefore Calling\na = %d\nb = %d", a, b);
  printf("\nAddresses Before Call\na = %d\nb = %d", &a, &b);

  myFun(&a, &b);
  // Calling by Reference.

  printf("\nAddresses After Call\na = %d\nb = %d", &a, &b);
  printf("\nAfter Calling\na = %d\nb = %d", a, b);
}

void myFun(int *x, int *y)
// x and y are formal parameters
{
  printf("\nAddresses From Function\nx = %d\ny = %d", x, y);
  *x = 20;
  *y = 10;
}
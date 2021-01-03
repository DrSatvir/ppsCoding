// About Using Pointers
#include <stdio.h> // Header File
void main()        // Void type main function
{
  int x, y; // declared intergers
  int *p;   // declared a pointer

  x = 10; // assigned value to x = 10;
  p = &x; // &x = Address of x
  y = *p; // y receives the value stored in pointer p

  printf("Value of x = %d\n", x);                // x = 10
  printf("Address x = %u\n", &x);                // &x = 5000;
  printf("Value of x using pointer = %d\n", *p); // 10
  printf("Address of x using point = %u\n", p);  // 5000
  printf("Value of x in y = %d\n", y);           //10

  *p = 25;
  printf("Now x = %d\n", x); // 25
}
#include <stdio.h>
// Pointers
void main()
{
  int num = 150;
  int *ptr;
  system("cls");

  ptr = &num;

  printf("\n%d", num);     // 150
  printf("\n%d", &num);    // 1003 --Symbolic
  printf("\n%d", ptr);     // 1003
  printf("\n%d", &ptr);    // 2007 --Symbolic
  printf("\n%d", *ptr);    // 150
  printf("\n%d", *(&num)); // 150
}
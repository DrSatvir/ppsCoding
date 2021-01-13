#include <stdio.h>
void main()
{
  int Number;
  int i;
  printf("Enter a number: ");
  scanf("%d", &Number);
  for (i = 1; i <= 10; i++)
    printf("%d X %d = %d\n", i, Number, i * Number);
  // 1 X N = N
  // 2 X N = 2N
}
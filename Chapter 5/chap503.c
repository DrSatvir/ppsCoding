// Insertion Sort Algorithm

#include <stdio.h>
void main()
{
  int anAry[] = {7, 2, 4, 1, 5, 3};
  int n = 6;
  int temp, hole;

  printf("\nUNSORED ARRAY\n");
  for (size_t i = 0; i < n; i++)
    printf("%d ", anAry[i]);

  for (size_t i = 1; i < n; i++)
  {
    temp = anAry[i];
    hole = i;
    while (hole > 0 && anAry[hole - 1] > temp)
    {
      anAry[hole] = anAry[hole - 1];
      hole = hole - 1;
    }
    anAry[hole] = temp;
  }

  printf("\nSORTED ARRAY\n");
  for (size_t i = 0; i < n; i++)
    printf("%d ", anAry[i]);
}

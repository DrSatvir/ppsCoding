// Bubble Sort Algorithm

#include <stdio.h>

void main()
{
  int unSortArry[6] = {2, 7, 5, 1, 4, 3};
  int temp;

  printf("Array: ");
  for (size_t i = 0; i < 6; i++)
    printf("%d ", unSortArry[i]);

  printf("\nArray: ");
  for (size_t k = 0; k < 3; k++)
  {
    for (size_t i = 0; i < 5; i++)
    {
      for (size_t j = 0; j < 6; j++)
      {
        if (unSortArry[i] > unSortArry[i + 1])
        {
          unSortArry[i] = unSortArry[i] + unSortArry[i + 1];
          unSortArry[i + 1] = unSortArry[i] - unSortArry[i + 1];
          unSortArry[i] = unSortArry[i] - unSortArry[i + 1];
        }
      }
    }
  }
  for (size_t i = 0; i < 6; i++)
    printf("%d ", unSortArry[i]);
}

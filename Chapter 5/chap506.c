// Sorting Algorithms

#include <stdio.h>
void main()
{
  int anAry[] = {7, 2, 4, 1, 5, 3};
  int n = 6;
  char Algo[] = "BSA";
  //  char Algo[] = "ISA";
  //  char Algo[] = "SSA";

  printf("\nUNSORED ARRAY\n");
  for (size_t i = 0; i < n; i++)
    printf("%d ", anAry[i]);

  if (Algo == "BSA")
  {
    bubbleSort(&anAry, n);
  }
  else if (Algo == "ISA")
  {
    insertSort(&anAry, n);
  }
  else if (Algo == "SSA")
  {
    selectSort(&anAry, n);
  }

  printf("\nSORED ARRAY\n");
  for (size_t i = 0; i < n; i++)
    printf("%d ", anAry[i]);
}

void bubbleSort(int anAry[], int n)
{
  for (size_t k = 0; k < n - 2; k++)
  {
    for (size_t i = 0; i < n - 1; i++)
    {
      for (size_t j = 0; j < n; j++)
      {
        if (anAry[i] > anAry[i + 1])
        {
          anAry[i] = anAry[i] + anAry[i + 1];
          anAry[i + 1] = anAry[i] - anAry[i + 1];
          anAry[i] = anAry[i] - anAry[i + 1];
        }
      }
    }
  }
}

void insertSort()
{
}

void selectSort()
{
}
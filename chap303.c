#include <stdio.h>
void main()
{
  int anArray[] = {3, 5, 7, 9, 2, 4, 6, 8};
  int minNumber = 1000, maxNumber = -1000;
  for (size_t i = 1; i < 8; i++)
  {
    if (anArray[i] > maxNumber)
    {
      maxNumber = anArray[i];
    }
    if (anArray[i] < minNumber)
    {
      minNumber = anArray[i];
    }
  }
  printf("Maximum Number in the array = %d", maxNumber);
  printf("\nMinimum Number in the array = %d", minNumber);
}

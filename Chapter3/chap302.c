#include <stdio.h>
void main()
{
  int anArray[] = {3, 5, 7, 9, 2, 4, 6, 8};
  int sum = 0;
  float avg;
  printf("The array = ");
  for (size_t i = 0; i < 8; i++)
  {
    printf("%d ", anArray[i]);
    sum = sum + anArray[i];
  }
  printf("\nSum of the array = %d", sum);
  avg = sum / 8.0;
  printf("\nAverage of the array = %2.2f", avg);
}

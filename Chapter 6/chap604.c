#include <stdio.h>

void quicksort(int[], int, int);

int main()
{
  int list[60];
  int size, p;

  printf("Enter the number of elements: ");
  scanf("%d", &size);
  printf("Enter the elements to be sorted:\n");
  for (p = 0; p < size; p++)
  {
    scanf("%d", &list[p]);
  }
  quicksort(list, 0, size - 1);
  printf("After applying quick sort\n");
  for (p = 0; p < size; p++)
  {
    printf("%d ", list[p]);
  }
  printf("\n");

  return 0;
}
void quicksort(int list[], int low, int high)
{
  int pivot, p, q, temp;
  if (low < high)
  {
    pivot = low;
    p = low;
    q = high;
    while (p < q)
    {
      while (list[p] <= list[pivot] && p <= high)
      {
        p++;
      }
      while (list[q] > list[pivot] && q >= low)
      {
        q--;
      }
      if (p < q)
      {
        temp = list[p];
        list[p] = list[q];
        list[q] = temp;
      }
    }
    temp = list[q];
    list[q] = list[pivot];
    list[pivot] = temp;
    quicksort(list, low, q - 1);
    quicksort(list, q + 1, high);
  }
}
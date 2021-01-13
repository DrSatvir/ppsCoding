#include <stdio.h>
void main()
{
  char fruitNames[][11] = {"Banana",
                           "Pineapples",
                           "Grapes",
                           "Apple",
                           "Mango"};
  for (size_t i = 0; i <= 4; i++)
  {
    printf("%s\n", fruitNames[i]);
  }
  // What is the objective of & in int, float, etc.
  // Array of Pointers
}
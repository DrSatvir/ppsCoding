#include <stdio.h>
void main()
{
  char a = 'a', b = 'b', c = 'c', d = 'd', e = 'e';

  char charArray[] = {'a', 'b', 'c', 'd', 'e'};
  int arraySize = sizeof(charArray) / sizeof(charArray[0]);
  printf("Size of Array = %d\n", arraySize);

  printf("Print Array as String = %s\n", charArray);

  charArray[0] = 'e';
  charArray[1] = 'd';
  charArray[2] = 'c';
  charArray[3] = 'b';
  charArray[4] = 'a';
  printf("Print Array as String = %s\n", charArray);

  char *strArray = "abcde";
  printf("Print Array as String = %s %d\n", strArray, sizeof(strArray) / sizeof(strArray[0]));
}

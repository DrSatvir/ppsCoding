#include <stdio.h>
void main()
{
  //  char strName[13] = "Hello IKGPTU";
  char strName[13] = {'H', 'e', 'l', 'l', 'o', ' ', 'I',
                      'K', 'G', 'P', 'T', 'U'};

  // Array Last character is \0 = NULL
  // "Hello IKGPTU" is a String
  printf("%s", strName);
}
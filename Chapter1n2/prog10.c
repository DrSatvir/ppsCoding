#include <stdio.h>
int main()
{
  int myFunOne();
  int myFunTwo();
  int res;
  res = myFunTwo() + myFunOne(); // IKGPTU or PTUIKG
  return 0;
}

int myFunOne()
{
  printf("IKG");
}
int myFunTwo()
{
  printf("PTU");
}

#include <stdio.h>

typedef struct
{
  int Length;
  int Width;
} Rectangle;

/*
struct Rectangle
{
  int Length;
  int Width;
};
*/
void main()
{
  system("cls");
  //  struct Rectangle myRec = {20, 10};
  Rectangle myRec = {20, 10};
  printf("Length = %d, Width = %d", myRec.Length, myRec.Width);
}

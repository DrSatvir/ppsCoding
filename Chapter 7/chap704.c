#include <stdio.h>

typedef struct
{
  int Width;
  int Length;
} Rectangle;
typedef struct
{
  int xPos;
  int yPos;
} Position;
typedef struct
{
  char meantFor[20];
  Rectangle rect;
  Position pos;
} Layout;

void main()
{
  system("cls");
  Layout layout = {"Drawing", {10, 20}, {50, 50}};
  printf("Rectangle of size %dx%d is located at x=%d and y=%d for %s",
         layout.rect.Width,
         layout.rect.Length,
         layout.pos.xPos,
         layout.pos.yPos,
         layout.meantFor);

  // Array of Structures
  Position path[3] = {{0, 0}, {15, 0}, {15, 15}};
  for (size_t i = 0; i < 3; i++)
  {
    printf("\n%d %d", path[i].xPos, path[i].yPos);
  }

  //Structure Array
  Layout *layoutStruct = &layout;
  printf("\nStruct Pointer = %s", layoutStruct->meantFor);
}
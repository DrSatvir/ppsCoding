#include <stdio.h>
struct Player // Global Structure
{
  int playerID;
  char playerName[20];
  int Score[5];
};

main()
{
  struct Students // Local Structure
  {
    int RollNo;
    char Name[20];
    int Marks[5];
  };
  system("cls");

  struct Students std = {123, "Satvir Singh", {10, 25, 20, 40, 30}};
  printf("\nFRom Main Function: %d", std.Marks[0]);

  check();
}

void check()
{
  struct Player std1 = {124, "Sumit", {21, 23, 27, 30, 21}};
  printf("\nFrom Check Function: %d", std1.Score[1]);
}

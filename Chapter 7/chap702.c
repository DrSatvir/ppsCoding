#include <stdio.h>
main()
{
  system("cls");

  struct Students
  {
    int RollNo;
    char Name[20];
    int Marks[5];
  };

  struct Students std = {123, "Satvir Singh", {10, 25, 20, 40, 30}};
  printf("\n%d", std.Marks[3]);
}

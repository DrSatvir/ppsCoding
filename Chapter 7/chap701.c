#include <stdio.h>

struct Employee // Global Structure
{
  int empNo;        // 4-Byte
  char empName[20]; // 1-Byte=20Bytes
  float empSalary;  // 4-Byte
};

int main(int argc, char const *argv[])
{
  system("cls");
  // Assigning/Initializing values collectively
  struct Employee emp = {1001, "Satvir Singh", 50000.0};

  printf("\nSize of Structure = %dBtyes", sizeof(emp));
  printf("\nSize of Structure = %dBtyes", sizeof(struct Employee));

  emp.empSalary = 60000.0;

  printf("\nEmployee Number = %d", emp.empNo);
  printf("\nEmployee Name = %s", emp.empName);
  printf("\nEmployee Salary = %5.2f", emp.empSalary);

  return 0;
}

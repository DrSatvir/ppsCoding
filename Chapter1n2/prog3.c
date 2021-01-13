/*
  Program to exaplin if-else statement
  Determination of Grades from Percentage
*/
#include <stdio.h>
void main()
{
  float Percentage;
  Percentage = 91;
  if (Percentage >= 95)
  {
    printf("Grade is Outstanding");
  }
  else if (Percentage >= 90 && Percentage < 95)
  {
    printf("Grade is A+");
  }
  else if (Percentage > 80 && Percentage < 90)
  {
    printf("Grade is A");
  }
  else
  {
    printf("Grade is Fail");
  }
}

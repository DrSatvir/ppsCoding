#include <stdio.h>
void main()
{
  FILE *fPtr;
  system("cls");
  fPtr = fopen("myFile.txt", "a");
  fprintf(fPtr, "Write again Programming for Problem Solving\n");
  fputc('A', fPtr);
  /*
  fPtr = fopen("myFile.txt", "w");
  fprintf(fPtr, "Programming for Problem Solving\n");
  fputs("This is testing for fputs...\n", fPtr);

  fscanf
  fgetc
*/
  fclose(fPtr);
  printf("Work Done");
}

#include <stdio.h>
main()
{
  int i = 5;
  printf("%d ", i--);
  if (i)
    main();
}
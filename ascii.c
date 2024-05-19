#include <stdio.h>
int main()
{

  // int i = 97;
  // while (i < (97 + 26))
  // {
  //   printf("ascii value of %c is %d\n", (char)(i), i);
  //   i++;
  // }
  for (char j = 'a'; j <= 'z'; j++)
  {
    printf("%c  is %d\n", j, (int)(j));
  }
  return 0;
}

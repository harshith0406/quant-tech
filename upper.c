#include <stdio.h>
#include <ctype.h>
int main()
{
  char chr;
  printf("enter the char: ");
  scanf("%c", &chr);
  if (isupper(chr))
    printf("its char and upper");
  else if (islower(chr))
    printf("its char and lower");
  else if (isdigit(chr))
    printf("its digit");
  else
    printf("spcl");
  return 0;
}

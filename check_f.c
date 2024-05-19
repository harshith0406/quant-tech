#include <stdio.h>
int main()
{
  int a;
  printf("enter the number");
  scanf("%d", &a);
  if (a >= 0)
  {
    if (a == 0)
    {
      printf("the number is zero");
    }
    else
    {
      printf("the number is positive");
    }
  }
  else
  {
    printf("the number is not positive");
  }
  return 0;
}

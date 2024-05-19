#include <stdio.h>
int main()
{
  int a;
  printf("enter the numbers");
  scanf("%d", &a);
  for (int i = 0; i <= a; i += 1)
  {
    for (int k = 0; k <= a - i - 1; k++)
    {
      printf(" ");
    }
    for (int j = 0; j <= (i * 2); j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = a - 1; i >= 0; i -= 1)
  {
    for (int k = 0; k <= a - i - 1; k++)
    {
      printf(" ");
    }
    for (int j = 0; j <= (i * 2); j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

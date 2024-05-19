#include <stdio.h>
int main()
{
  int a;
  printf("enter the numbers");
  scanf("%d", &a);
  for (int i = 0; i < a - 2; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("*");
    }
    for (int j = i; j <= a - i; j++)
    {
      printf(" ");
    }
    for (int j = a - i; j <= a; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for (int i = a - 2; i >= 0; i--)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("*");
    }
    for (int j = i; j <= a - i; j++)
    {
      printf(" ");
    }
    for (int j = a - i; j <= a; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

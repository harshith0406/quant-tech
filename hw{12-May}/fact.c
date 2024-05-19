#include <stdio.h>
int main()
{
  int b;
  printf("enter the number");
  scanf("%d", &b);
  int fact = 1;
  for (int i = 1; i <= b; i++)
  {
    fact *= i;
  }
  printf("the factorial is %d", fact);
}

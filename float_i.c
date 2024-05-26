#include <stdio.h>
int main()
{
  float num1;
  printf("enter the number");
  scanf("%f", &num1);
  if (num1 == (int)num1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}

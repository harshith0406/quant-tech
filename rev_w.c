#include <stdio.h>
int main()
{
  int a;
  printf("enter the numbers");
  scanf("%d", &a);
  int temp = a;
  int rev = 0;
  while (temp)
  {
    int digit = temp % 10;
    rev = rev * 10 + digit;
    temp /= 10;
  }
  printf("%d", rev);
  return 0;
}

#include <stdio.h>
int main()
{
  int a;
  printf("enter the numbers");
  scanf("%d", &a);
  int temp = a;
  int rev = 0;
  int temp1 = a;
  int count = 0;
  while (temp1)
  {
    count++;
    temp1 /= 10;
  }
  while (temp)
  {
    int digit = temp % 10;
    rev = rev * 10 + digit;
    temp /= 10;
  }
  int res_sum = 0;
  while (count)
  {
    int rem = a % 10;
    res_sum += rem * rem * rem;
    count--;
  }
  if (res_sum == rev)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  // printf("%d", rev);
  return 0;
}

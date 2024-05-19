#include <stdio.h>
#include <math.h>
int main()
{
  int a;
  printf("enter the number");
  scanf("%d", &a);
  // int count = 0;
  // while (a)
  // {
  //   count++;
  //   a /= 10;
  // }
  // printf("count is %d", count);
  printf("number=%d", ((int)(floor(log10(a)))+1));
}

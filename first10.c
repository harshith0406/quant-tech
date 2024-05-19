#include <stdio.h>
int main()
{
  // int a, b;
  // printf("enter the numbers");
  // scanf("%d%d", &a, &b);
  // for (int i = 1; i <= 10; i++)
  // {
  //   printf("%d \n", (i*i));
  // }
  int a = 100;
  int count = 0;
  // while(a){
  //   count++;
  //   a/=10;
  // }
  for (; a > 0; count++)
  {
    a /= 10;
  }

  printf("digits %d", count);
  return 0;
}

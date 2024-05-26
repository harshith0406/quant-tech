#include <stdio.h>
void print(int *a, int *b);
int main()
{
  int num1, num2;
  printf("enter the number");
  scanf("%d", &num1);
  scanf("%d", &num2);
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  print(ptr1, ptr2);
  printf("%d", num1);
  printf("%d", num2);
  return 0;
}
void print(int *a, int *b)
{
  printf("add %d\n", *(a) + *(b));
  printf("sub %d\n", *(a) - *(b));
  printf("mul %d\n", *(a) * *(b));
  printf("div %d\n", *(a) / *(b));
  *(a) = 10;
  *(b) = 10;
}

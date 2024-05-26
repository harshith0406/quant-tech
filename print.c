#include <stdio.h>
int main()
{
  int arr[5];
  for (size_t i = 0; i < 5; i++)
  {
    printf("enter the number");
    scanf("%d", &arr[i]);
  }
  for (size_t i = 0; i < 5; i++)
  {
    printf("%d  ", arr[i]);
  }
  return 0;
}

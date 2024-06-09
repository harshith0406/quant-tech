#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  int min, max;
  int arr[50];

  for (size_t i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  int rsum = 0, lsum = 0;
  int i = 0;
  int j = size - 1;
  int idx;
  while (i <= j)
  {
    if (lsum <= rsum)
    {
      lsum += arr[i];
      i++;
    }
    else
    {
      rsum += arr[j];
      j--;
    }
    if (lsum == rsum && i <= j + 1)
    {
      idx = i;
    }
  }
  printf("index %d", idx);
  return 0;
}

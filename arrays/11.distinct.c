#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  int i, j;
  int arr[50];

  for (size_t i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  int count = 0;
  // for (int i = 0; i < size; i++)
  // {
  //   int isDistinct = 1;
  //   for (int j = i + 1; j < size; j++)
  //   {
  //     if (arr[i] == arr[j])
  //     {
  //       isDistinct = 0;
  //       break;
  //     }
  //   }
  //   if (isDistinct)
  //   {
  //     count++;
  //   }
  // }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        break;
      }
    }
    if (i == j)
    {
      count++;
    }
  }
  printf("count is %d", count);
  return 0;
}

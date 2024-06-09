#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");

  int arr[50];

  for (size_t i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  int count;
  for (int i = 0; i < size; i++)
  {
    count = 0;
    for (int j = 0; j < size; j++)
    {
      if (arr[j] == arr[i])
      {
        count++;
      }
    }

    int alreadyPrinted = 0;
    for (int k = 0; k < i; k++)
    {
      if (arr[k] == arr[i])
      {
        alreadyPrinted = 1;
        break;
      }
    }

    if (!alreadyPrinted)
    {
      printf("Count of %d is %d\n", arr[i], count);
    }
  }

  return 0;
}

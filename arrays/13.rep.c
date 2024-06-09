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

  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        break;
      }
    }
    if (i != j)
    {
     printf("%d",arr[i]);
    }
  }
  return 0;
}

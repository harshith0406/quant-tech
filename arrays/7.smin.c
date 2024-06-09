#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  int sum = 0;
  int arr[50];
  /*
  int *arr = (int *)malloc(n * sizeof(int));
  if(arr==NULL){
    printf("memory allocation failed");
  }
  */
  for (size_t i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  int min, smin;
  if (arr[0] < arr[1])
  {
    min = arr[0];
    smin = arr[1];
  }
  else
  {
    min = arr[1];
    smin = arr[0];
  }

  for (size_t i = 2; i < size; i++)
  {
    if (arr[i] < min)
    {
      smin = min;
      min = arr[i];
    }
    else if (arr[i] < smin && arr[i] != min)
    {
      smin = arr[i];
    }
  }
  printf("min=%d\n", min);
  printf("second min %d", smin);
  return 0;
}

#include <stdio.h>
int main()
{
  size_t size, ssize;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  int arr1[50];
  /*
  int *arr = (int *)malloc(n * sizeof(int));
  if(arr==NULL){
    printf("memory allocation failed");
  }
  */
  for (size_t i = 0; i < size; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("enter the sub size");
  scanf("%d", &ssize);
  printf("enter the sub elements");
  int arr2[50];
  for (size_t i = 0; i < ssize; i++)
  {
    scanf("%d", &arr2[i]);
  }
  int flag = 0;
  for (int i = 0; i < ssize; i++)
  {
    flag = 0;
    for (int j = 0; j < size; j++)
    {
      if (arr1[i] == arr2[j])
      {
        flag = 1;
      }
    }
    if (flag != 1)
    {
      printf("not sub");
      return 0;
    }
  }
  printf("subarray");
  return 0;
}

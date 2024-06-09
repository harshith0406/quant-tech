#include <stdio.h>
void rotate(int *arr, int start, int end)
{
  int temp;
  while (start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  int arr[50];
  int k;
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
  printf("enter the value of k");
  scanf("%d", &k);
  k = k % size;
  rotate(arr, 0, k - 1);
  rotate(arr, k, size - 1);
  rotate(arr, 0, size - 1);
  for (size_t i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}

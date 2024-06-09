#include <stdio.h>
#include <stdlib.h>
void print(int arr[], size_t n)
{
  for (size_t i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void print_1(int *arr, size_t n)
{
  for (size_t i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void print_2(int *arr, size_t n)
{
  for (size_t i = 0; i < n; i++)
  {
    printf("%d ", *(arr + i));
  }
  printf("\n");
}
int main()
{
  // int arr[100];
  size_t n;
  printf("enter the size of the array");
  scanf("%d", &n);
  int *arr = (int *)malloc(n * sizeof(int));
  /*
   *The malloc() function allocates size bytes and returns a pointer to the allocated memory
   *The memory is not initialized
   *If size is 0, then malloc() returns a unique pointer value that can later be successfully passed to free()
   */
  // int *ptr = (int *)calloc(n, sizeof(int));
  /*
   *The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
   *The memory is set to zero.  If nmemb or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to free()
   */
  if(arr==NULL){
    printf("memory allocation failed");
  }//memory allocation failed in this case
  
  printf("enter the elements of the array");
  for (size_t i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  print(arr, n);
  print_1(arr, n);
  print_2(arr, n);
  return 0;
}

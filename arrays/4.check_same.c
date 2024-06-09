#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements of arr1");
  int arr1[50];
  int arr2[50];
  /*
  int *arr = (int *)malloc(n * sizeof(int));
  if(arr==NULL){
    printf("memory allocation failed");
  }
  */
  for(size_t i = 0; i < size; i++){
    scanf("%d", &arr1[i]);
  }
  printf("enter the elements of arr2");
  for(size_t i = 0; i < size; i++){
    scanf("%d", &arr2[i]);
  }
  for(size_t i = 0; i<size; i++){
    if(arr1[i]!=arr2[i]){
      printf("not same");
      return 0;
    }
  }
  printf("same");
  return 0;
}

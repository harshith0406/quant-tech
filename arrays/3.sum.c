#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  int sum=0;
  int arr[50];
  /*
  int *arr = (int *)malloc(n * sizeof(int));
  if(arr==NULL){
    printf("memory allocation failed");
  }
  */
  for(size_t i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  for(size_t i = 0; i<size; i++){
    sum+=arr[i];
  }
  printf("sum %d\n ",sum);
  return 0;
}

#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  int min,max;
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
    if(arr[i]<min){
      min = arr[i];
    }
    if(arr[i]>max){
      max = arr[i];
    }
  }
  printf("maximum %d\n ",max);
  printf("minimum %d",min);
  return 0;
}

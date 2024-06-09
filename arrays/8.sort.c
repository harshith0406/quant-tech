#include <stdio.h>
int main()
{
  size_t size;
  printf("enter the size");
  scanf("%d", &size);
  printf("enter the elements");
  
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
  int temp;
  for(size_t i = 0; i < size; i++){
    for(size_t j = i; j<size; j++){
      if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  for(size_t i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}

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
  int odd=0, eve=0;
  for (size_t i = 0; i < size; i++)
  {
    if(arr[i]%2 == 0){
      eve++;
    }
    else{
      odd++;
    }
  }
  printf("number of odd%d\n ", odd);
  printf("number of eve%d\n ", eve);
  return 0;
}

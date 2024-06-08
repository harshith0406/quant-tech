#include <stdio.h>
void print(int arr[],size_t n){
  for(size_t i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
}
void print_1(int *arr,size_t n){
  for(size_t i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
}
void print_2(int *arr,size_t n){
  for(size_t i=0; i<n; i++){
    printf("%d ",*(arr+i));
  }
}
int main()
{
  int arr[5]={0,1,2,3,4};
  print(arr,5);
  print_1(arr,5);
  print_2(arr,5);
  return 0;
}

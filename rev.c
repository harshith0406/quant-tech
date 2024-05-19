#include <stdio.h>
int main()
{
  int a;
  printf("enter the numbers");
  scanf("%d", &a);
    int temp = a;
  // int count=0;
  int rev = 0;
  // while(a){
  //   int digit=a%10;
  //   rev=rev*10+digit;
  //   a/=10;
  // }
  for (; a;)
  {
    rev = rev * 10;
    int digit = a % 10;
    rev += +digit;
    a /= 10;
  }
  // printf("%d",rev);
  if (temp == rev)
  {
    printf("palindrome");
  }
  else
  {
    printf("not a palindrome");
  }
}

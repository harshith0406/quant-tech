#include <stdio.h>
int main()
{
  int inp_num;
  printf("enter the number");
  scanf("%d", &inp_num);
  long int square = inp_num * inp_num;
  int count_inp = 0;
  int copy_inp = inp_num;
  // int copy_inp1 = inp_num;
  int result = 0;
  while (copy_inp)
  {
    count_inp++;
    copy_inp /= 10;
  }
  while (count_inp)
  {
    int last_dig = square % 10;
    result += last_dig*10;
    square /= 10;
    count_inp--;
  }
  //printf("%d",result);
  printf("%d",count_inp);
  if (result == inp_num)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }

  return 0;
}

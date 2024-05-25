#include <stdio.h>
int add(int num1, int num2)
{
  return num1 + num2;
}
int sub(int num1, int num2)
{
  return num1 - num2;
}
int mul(int num1, int num2)
{
  return num1 * num2;
}
int div(int num1, int num2)
{
  return num1 / num2;
}
int mod(int num1, int num2)
{
  return num1 % num2;
}
int main()
{
  int num1, num2;
  printf("enter the number");
  scanf("%d%d", &num1, &num2);
  int choice;
  int result = 0;
  do
  {
    printf("\noperation\n 1.add \n 2.sub \n 3.mul \n 4.div \n 5.mod \n 6.exit\n");
    printf("enter the choice");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      result = add(num1, num2);
      break;
    case 2:
      result = sub(num1, num2);
      break;
    case 3:
      result = mul(num1, num2);
      break;
    case 4:
      if (num2 != 0)
      {
        result = div(num1, num2);
      }
      else
      {
        printf("division not possible\n");
        return 0;
      }
    case 5:
      result = mod(num1, num2);
      break;
    default:
      printf("enter valid input");
      break;
    }
    printf("result=%d", result);
  } while (choice != 6);
  return 0;
}

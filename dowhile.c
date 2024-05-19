#include <stdio.h>
int main()
{
  int num1, num2, choice;
  printf("enter the number");
  scanf("%d%d", &num1, &num2);
  do
  {
    printf("\noperation\n 1.add \n 2.sub \n 3.mul \n 4.div \n 5.mod \n 6.exit\n");
    printf("enter the choice");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("add=%d", num1 + num2);
      break;
    case 2:
      printf("sub=%d", num1 - num2);
      break;
    case 3:
      printf("mul=%d", num1 * num2);
      break;
    case 4:
      if (num2 != 0)
      {
        printf("div=%d", num1 / num2);
        break;
      }
      else
      {
        printf("not possible");
      }
    case 5:
      printf("mod=%d", num1 % num2);
      break;
    default:
      printf("enter valid input");
      break;
    }
  } while (choice != 6);

  return 0;
}

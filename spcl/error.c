#include <stdlib.h>
#include <stdio.h>

int main()
{
  int locks, stocks, barrels, t_sales, chappal;
  float commission;
  int flag = 1;
  printf("flag1=%d \n", flag);
  printf("Enter the total number of locks: \n");
  scanf("%d", &locks);
  printf("flag2=%d \n", flag);
  if (locks <= 0 || locks > 70)
  {
    printf("flag3=%d \n", flag);
    flag = 0;
    printf("flag4=%d \n", flag);
  }
  printf("flag5=%d \n", flag);
  if (flag == 0)
  {
    printf("flag6=%d \n", flag);
    printf("Invalid input\n");
    printf("flag7=%d \n", flag);
  }
  printf("flag8=%d \n", flag);
  printf("Enter the total number of stocks: \n");
  scanf("%d", &stocks);
  printf("flag9=%d \n", flag);
  if (stocks <= 0 || stocks > 80)
  {
    printf("flag10=%d \n", flag);
    flag = 0;
    printf("flag11=%d \n", flag);
  }
  printf("flag12=%d \n", flag);
  if (flag == 0)
  {
    printf("flag13=%d \n", flag);
    printf("Invalid input\n");
    printf("flag14=%d \n", flag);
  }
  printf("flag15=%d \n", flag);
  printf("Enter the total number of barrels: \n"); // Corrected typo
  scanf("%d", &barrels);
  printf("flag16=%d \n", flag);
  if (barrels <= 0 || barrels > 90)
  {
    printf("flag17=%d \n", flag);
    flag = 0;
    printf("flag18=%d \n", flag);
  }
  printf("flag19=%d \n", flag);
  if (flag == 0)
  {
    printf("flag20=%d \n", flag);
    printf("Invalid input\n");
    printf("flag21=%d \n", flag);
  }
  printf("flag22=%d \n", flag);
  printf("Enter the total number of chappal: \n");
  scanf("%d", &chappal);
  printf("flag23=%d \n", flag);
  if (chappal <= 0 || chappal > 80)
  {
    printf("flag24=%d \n", flag);
    flag = 0;
    printf("flag25=%d \n", flag);
  }
  printf("flag26=%d \n", flag);
  if (flag == 0)
  {
    printf("flag27=%d \n", flag);
    printf("Invalid input\n");
    printf("flag28=%d \n", flag);
  }
  printf("flag29=%d \n", flag);
  if (flag)
  {
    printf("flag30=%d \n", flag);
    t_sales = (locks * 45) + (stocks * 30) + (barrels * 25);
    if (t_sales <= 1000)
    {
      commission = 0.10 * t_sales;
    }
    else if (t_sales < 1800)
    {
      commission = 0.10 * 1000 + (0.15 * (t_sales - 1000));
    }
    else
    {
      commission = 0.10 * 1000 + (0.15 * 800) + (0.20 * (t_sales - 1800));
    }
    printf("The total sales is %d\nThe commission is %f\n", t_sales, commission);
  }
  printf("flag31=%d\n", flag);

  return 0;
}

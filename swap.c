#include <stdio.h>
int main()
{
  int a = 5, b = 6;
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("a=%d,b=%d\n", a, b);
  return 0;
}

// a=4,b=6;
// a=4+6=10;
// b=10-6=4;
// a=10-4=6;

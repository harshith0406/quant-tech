#include <stdio.h>
extern int globalvar;
int main()
{
  printf("global %d", globalvar);
  return 0;
}
// makefile

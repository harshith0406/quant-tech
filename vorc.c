#include <stdio.h>
// #include<ctype.h>
int main()
{
  char chr;
  printf("enter the char");
  scanf("%s", &chr);
  int asc = (int)chr;
  // int ch=tolower(chr);
  if ((asc >= 97 && asc <= 122) || (asc >= 65 && asc <= 90))
  {
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U')
    {
      printf("the char is vowel");
    }
    else
      printf("the char is consonant");
  }
  else
  {
    printf("the number is not a vowel or consonant");
  }
  return 0;
}

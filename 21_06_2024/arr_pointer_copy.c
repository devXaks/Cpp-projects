#include <stdio.h>
#include <string.h>

int main()
{
  char c1[6] = "Hello";
  char *c2;
  c2 = c1;
  printf("%s\n", c2);
  printf("%s\n", c1);
  printf("%c\n", c1[0]);
  printf("%c\n", c2[1]);
  c2[4] = "u";
  printf("%s\n", c2);
  printf("%c\n", c2[1]);

  return 0;
}
#include <stdio.h>

unsigned *f(unsigned *p)
{
}

int main()
{
  unsigned a[] = {4, 3, 5, 10, 23, 0, 21, 9, 6};
  unsigned *w = f(a);

  for (unsigned *q = w; *q != 0; ++q)
  {
    printf("%d\n", *q);
  }

  return 0;
}
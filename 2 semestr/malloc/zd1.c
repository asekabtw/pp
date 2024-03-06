#include <stdio.h>
#include <stdlib.h>

unsigned *f(unsigned *p)
{
  unsigned length = 0;
  while (p[length] != 0)
  {
    length++;
  }

  unsigned *result = malloc((length + 1) * sizeof(unsigned));

  for (unsigned i = 0; i <= length; i++)
  {
    result[i] = p[i];
  }

  return result;
}

int main()
{
  unsigned a[] = {4, 3, 5, 10, 23, 0, 21, 9, 6};
  unsigned *w = f(a);

  for (unsigned *q = w; *q != 0; ++q)
  {
    printf("%d\n", *q);
  }
  printf("0");

  free(w);

  return 0;
}
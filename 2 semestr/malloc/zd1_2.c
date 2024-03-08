#include <stdio.h>
#include <stdlib.h>

int *f1(int *t)
{
  int i = 0;
  for (i = 0; t[i] != 0; i++)
    ;
  int *p = malloc((i + 1) * sizeof(int));

  for (int j = 0; j <= i; j++)
  {
    p[j] = t[j];
  }

  return p;
}

int main()
{
  int tab[] = {3, 7, 2, 0, 4, 6, 0, 5};
  int *w = f1(tab);

  for (int i = 0; w[i] != 0; i++)
  {
    printf("%d ", w[i]);
  }
  printf("0");

  free(w);

  return 0;
}
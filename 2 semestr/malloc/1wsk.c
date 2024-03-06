#include <stdio.h>
#include <stdlib.h>

void t(const int rozmiar)
{
  double *p = malloc(rozmiar * sizeof(double));
  double *y = p + rozmiar, *w = p;

  for (; w < y; w++)
  {
    printf("Podaj cyfre: ");
    scanf("%lf", w);
  }

  for (--y; y >= p; y--)
  {
    printf("%.lf ", *y);
  }

  printf("\n");

  free(p);
}

int main()
{
  t(4);

  return 0;
}
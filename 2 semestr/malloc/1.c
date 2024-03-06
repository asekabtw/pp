#include <stdio.h>
#include <stdlib.h>

void t(const int rozmiar)
{
  double *p = malloc(rozmiar * sizeof(double));

  for (int i = 0; i < rozmiar; i++)
  {
    printf("Podaj cyfre: ");
    scanf("%lf", &p[i]);
  }

  for (int i = rozmiar - 1; i >= 0; i--)
  {
    printf("%.lf ", p[i]);
  }

  printf("\n");

  free(p);
}

int main()
{
  t(4);

  return 0;
}
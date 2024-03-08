#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double **funkcja(int n)
{
  double **p = malloc(n * sizeof(double *));

  for (int i = 0; i < n; i++)
  {
    p[i] = malloc((n - i) * sizeof(double));
  }

  return p;
}

void f2(double **p, int n)
{
  for (int i = 0; i < n; i++)
  {
    free(p[i]);
  }
  free(p);
}

int main()
{
  double **w = funkcja(5);

  for (int i = 0, m = 1; i < 5; i++)
  {
    for (int j = 0; j <= 4 - i; j++)
    {
      w[i][j] = m;
      printf("%.lf ", w[i][j]);
      m++;
    }
    printf("\n");
  }

  printf("-------------- \n");
  f2(w, 5);

  return 0;
}
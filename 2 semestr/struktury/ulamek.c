#include <stdio.h>

struct ulamek
{
  int licznik;
  int mianownik;
};

int p(struct ulamek u1, struct ulamek u2);
int n(struct ulamek tab[4]);

int main()
{
  struct ulamek tab[4] = {{2, 3}, {4, 7}, {5, 9}, {8, 17}};
  struct ulamek u1, u2;
  // printf("%d \n", p(u1, u2));
  n(tab);

  return 0;
}

int n(struct ulamek tab[4])
{
  for (int i = 0; i < 4; i++)
  {
  }
}

int p(struct ulamek u1, struct ulamek u2)
{
  printf("U1: Licznik (spacja) mianownik: ");
  scanf("%d %d", &u1.licznik, &u1.mianownik);
  printf("U2: Licznik (spacja) mianownik: ");
  scanf("%d %d", &u2.licznik, &u2.mianownik);

  if (((float)u1.licznik / u1.mianownik) < ((float)u2.licznik / u2.mianownik))
  {
    return 1;
  }
  return 0;
}
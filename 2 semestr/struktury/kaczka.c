#include <stdio.h>

struct towar
{
  char nazwa[20];
  float cena;
};

void czytaj(struct towar *p)
{
  scanf("%s %f", (p->nazwa), &((*p).cena));
}

struct towar czytaj2()
{
  struct towar kaczka;
  scanf("%s %f", kaczka.nazwa, &kaczka.cena);

  return kaczka;
}

void pisz(struct towar t)
{
  printf("%s %f \n", t.nazwa, t.cena);
}

void pisz2(struct towar const *p)
{
  printf("%s %f \n", (*p).nazwa, (*p).cena);
}

int main()
{
  struct towar t = {"Kaczka dziwaczka", 200.0};
  struct towar nie = czytaj2();
  // pisz2(&t);
  pisz(nie);

  return 0;
}
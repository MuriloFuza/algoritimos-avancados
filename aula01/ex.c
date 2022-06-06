#include <stdio.h>
#define max 1000000
#define min 0

int rotina(int n)
{
  int ciclo = 0;
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n = n / 2;
    }
    else
    {
      n = 3 * n + 1;
    }
    ciclo++;
  }

  return ++ciclo;
}

int main()
{

  int i, j, cicloMax = 0, ciclo = 0, inicio;

  while (1)
  {
    scanf("%d %d", &i, &j);
    inicio = i;
    ciclo = 0;
    cicloMax = 0;

    if (!(i > min && i < max && j > min && j < max))
      break;

    while (inicio <= j)
    {
      ciclo = rotina(inicio);
      if (ciclo > cicloMax)
      {
        cicloMax = ciclo;
      }
      inicio++;
    }

    printf("%d %d %d\n", i, j, cicloMax);
  }

  return 0;
}
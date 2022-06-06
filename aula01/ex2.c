#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MIN 0

int vizinhos(char campo[MAX][MAX], int i, int j)
{
  int vizinhos = 0;

  if (campo[i][j] == '*')
  {
    return -1;
  }

  if (campo[i - 1][j - 1] == '*')
  {
    vizinhos++;
  }

  if (campo[i - 1][j] == '*')
  {
    vizinhos++;
  }

  if (campo[i - 1][j + 1] == '*')
  {
    vizinhos++;
  }

  if (campo[i][j - 1] == '*')
  {
    vizinhos++;
  }

  if (campo[i][j + 1] == '*')
  {
    vizinhos++;
  }

  if (campo[i + 1][j - 1] == '*')
  {
    vizinhos++;
  }

  if (campo[i + 1][j] == '*')
  {
    vizinhos++;
  }

  if (campo[i + 1][j + 1] == '*')
  {
    vizinhos++;
  }

  return vizinhos;
}

int main()
{
  int m, n, cont = 1;
  char campo[MAX][MAX], tmp[MAX];

  while (1)
  {
    scanf("%d %d", &m, &n);

    if (m == MIN && n == MIN)
      break;

    for (int i = 0; i < m; i++)
    {
      scanf("%s", tmp);
      sprintf(campo[i], tmp);
    }

    printf("Campo #%d:\n", cont++);

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        int bombas = vizinhos(campo, i, j);
        if (bombas == -1)
        {
          printf("*");
        }
        else
        {
          printf("%d", bombas);
        }
      }
      printf("\n");
    }
  }

  return 0;
}
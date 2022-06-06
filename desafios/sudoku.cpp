#include <stdio.h>
#include <stdlib.h>
#define max 9

int sudoku(int mRegiao[max][max], int mLinha[max][max], int mColuna[max][max])
{

  int numero = 0;
  int result = 1;

  for (int i = 0; i < max; i++)
  {
    for (int j = 0; j < max; j++)
    {
      mRegiao[i][j] = 0;
      mLinha[i][j] = 0;
      mColuna[i][j] = 0;
    }
  }

  for (int i = 0; i < max; i++)
  {
    for (int j = 0; j < max; j++)
    {
      // leitura dos dados da matriz
      scanf("%d", &numero);

      // verifica o preenchimento dentro do limite
      if ((numero < 1) || (numero > max))
      {
        result = 0;
      }

      if (mLinha[i][numero - 1] != 0)
      {
        result = 0;
      }

      if (mColuna[j][numero - 1] != 0)
      {
        result = 0;
      }

      if (mRegiao[3 * (i / 3) + j / 3][numero - 1] != 0)
      {
        result = 0;
      }

      mLinha[i][numero - 1] = numero;
      mColuna[j][numero - 1] = numero;
      mRegiao[3 * (i / 3) + j / 3][numero - 1] = numero;
    }
  }

  return result;
}

int main()
{
  int instancias = 0;
  int guard = 0;
  int correto = 1;

  int mRegiao[max][max];
  int mLinha[max][max];
  int mColuna[max][max];

  // leitura de dados
  scanf("%d", &instancias);
  while (instancias != 0)
  {
    instancias -= 1;
    guard++;

    correto = sudoku(mRegiao, mLinha, mColuna);

    printf("Instancia %d\n", guard);
    if (correto == 1)
    {
      if (instancias == 0)
      {
        printf("SIM");
      }
      else
      {
        printf("SIM\n\n");
      }
    }
    else
    {
      if (instancias == 0)
      {
        printf("NAO");
      }
      else
      {
        printf("NAO\n\n");
      }
    }
  }
}
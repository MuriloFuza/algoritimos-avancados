#include <stdio.h>
#define MAX 4

using namespace std;

void criaPalavra(char *palavra, int pos)
{
  if (pos == MAX)
  {
    printf("%s\n", palavra);
  }
  else
  {
    for (char letra = 'a'; letra <= 'z'; letra++)
    {
      palavra[pos] = letra;
      criaPalavra(palavra, pos + 1);
    }
  }
}

int main()
{
  char palavra[MAX + 1];
  palavra[MAX + 1] = '/0';
  criaPalavra(palavra, 0);
  return 0;
}
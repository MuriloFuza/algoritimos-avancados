#include <map>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{

  printf("Exercicio 4 - Map \n\n");

  map<char, int> m;
  map<char, int>::iterator p;

  m.insert(pair<char, int>('c', 2));
  m.insert(make_pair('b', 4));
  m['a'] = 5;

  printf("Chave b sozinha: %d \n\n", m['b']);

  for (p = m.begin(); p != m.end(); p++)
    printf("Chave: %c -  Valor: %d\n", p->first, p->second);

  printf("\n");
  printf("#==================================#\n");

  return 0;
}
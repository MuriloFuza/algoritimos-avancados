#include <deque>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{

  printf("Exercicio 5 - Deque\n\n");

  deque<char> d;
  int i;

  d.push_back('c');
  d.push_back('a');
  d.insert(d.begin() + 1, 'b');

  printf("Lista completa: ");
  for (i = 0; i < d.size(); i++)
    printf("%c ", d[i]);

  printf("\nPrimeiro elemento: %c\n", d.front());
  printf("Ultimo elemento: %c\n", d.back());
  printf("Remove primeiro elemento\n");
  d.pop_front();
  printf("Remove ultimo elemento\n");
  d.pop_back();
  printf("Pos 0: %c\n", d[0]);

  printf("\n");
  printf("#==================================#\n");

  return 0;
}
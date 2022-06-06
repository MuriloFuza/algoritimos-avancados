#include <stack>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{

  printf("Exercicio 6 - Pilha\n\n");

  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  printf("Primeiro elemento da pilha: %d\n", s.top());
  printf("POP na lista\n");
  s.pop();
  printf("Primeiro elemento da lista: %d\n", s.top());
  printf("\n");
  printf("#==================================#\n");

  return 0;
}
#include <vector>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{

  printf("Exercicio 2 \n\n");

  vector<int> vet;
  vector<int>::iterator p;

  for (int i = 0; i <= 4; i++)
    vet.push_back(i);

  for (p = vet.begin(); p != vet.end(); p++)
    printf("%d ", *p);

  printf("\n");
  printf("#==================================#\n");

  return 0;
}
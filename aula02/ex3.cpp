#include <vector>
#include <stdio.h>
#include <cstdio>

using namespace std;

int main()
{

  printf("Exercicio 3 - Reverse iterator \n\n");

  vector<int> vet;
  vector<int>::reverse_iterator rp;

  for (int i = 0; i <= 4; i++)
    vet.push_back(i);

  for (rp = vet.rbegin(); rp != vet.rend(); rp++)
    printf("%d ", *rp);

  printf("\n");
  printf("#==================================#\n");

  return 0;
}
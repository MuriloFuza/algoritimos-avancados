#include <vector>
#include <stdio.h>

using namespace std;

int main()
{

  printf("Exercicio 1 \n\n");
  vector<int> example(10);
  example[2] = 5;

  printf("Valor na pos 5 = %d \n", example[2]);
  printf("#==================================#\n");

  return 0;
}
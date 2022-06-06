#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
  priority_queue<int> moedas;
  int d = 0;
  int count = 0;
  int troco;
  int numMoedas;

  scanf("%d", &troco);
  scanf("%d", &numMoedas);

  for (int i = 0; i < numMoedas; i++)
  {
    d = 0;
    scanf("%d", &d);
    moedas.push(d);
  }

  while (troco > 0)
  {
    if (moedas.top() <= troco)
    {
      printf("%d ", moedas.top());
      troco = troco - moedas.top();
      count++;
    }
    else
    {
      moedas.pop();
    }
  }

  printf("\n%d", count);
  return 0;
}
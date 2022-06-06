#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
  int jaulas, animais = 0;
  vector<int> massas;

  scanf("%d", &jaulas);
  scanf("%d", &animais);

  for (int i = 0; i < 4; i++)
  {
    int aux = 0;
    scanf("%d", &aux);
    massas.push_back(aux);
  }
  massas.push_back(0);
  massas.push_back(0);

  sort(massas.begin(), massas.end());

  for (int i = 0; i < jaulas; i++)
  {
    int comeco = *massas.begin();
    int fim = *(massas.end() - 1);

    if (comeco == 0)
    {
      printf("#Jaula %d: %d\n", i + 1, fim);
    }
    else
    {
      printf("#Jaula %d: %d %d\n", i + 1, comeco, fim);
    }

    massas.erase(massas.begin());
    massas.pop_back();
  }

  return 0;
}
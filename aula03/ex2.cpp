#include <stdio.h>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool sortByVal(const pair<int, int> &a,
               const pair<int, int> &b)
{
  return (a.second < b.second);
}

int main()
{
  vector<int> inicio;
  vector<int> fim;
  vector<int>::iterator v;
  vector<int>::iterator v2;
  map<int, int>::iterator p;

  int tarefas = 0;

  scanf("%d", &tarefas);
  int d = 0;
  for (int i = 0; i < tarefas; i++)
  {
    int d = 0;
    scanf("%d", &d);
    inicio.push_back(d);
    d = 0;
  }
  for (int i = 0; i < tarefas; i++)
  {
    scanf("%d", &d);
    fim.push_back(d);
    d = 0;
  }
  map<int, int> mapT;

  for (int i = 0; i < tarefas; i++)
  {
    mapT.insert(pair<int, int>(inicio.at(i), fim.at(i)));
  }

  vector<pair<int, int> > vecAux;
  for (p = mapT.begin(); p != mapT.end(); p++)
  {
    vecAux.push_back(make_pair(p->first, p->second));
  }

  sort(vecAux.begin(), vecAux.end(), sortByVal);

  for (int i = 0; i < vecAux.size(); i++)
  {
    printf("%d %d\n", vecAux[i].first, vecAux[i].second);
  }

  return 0;
}
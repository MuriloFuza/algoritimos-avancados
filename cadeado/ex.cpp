#include <vector>
#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int calc_distance(int init, int expected)
{
  if (init > expected)
  {
    int left_simple = init - expected;
    int right = (9 - init) + expected;
    if (right < left_simple)
    {
      return 1;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    int right_simple = expected - init;
    int left = abs(init + (9 - init));
    if (left < right_simple)
    {
      return -1;
    }
    else
    {
      return 1;
    }
  }
}
bool verify_banned(vector<int> verify, vector<vector<int>> banned)
{
  for (auto aux : banned)
  {
    int count = 0;
    int count_match = 0;
    for (int aux_verify : verify)
    {
      if (aux_verify == aux[count])
      {
        count_match++;
      }
      count++;
    }
    if (count_match == 4)
    {
      return 1;
    }
  }
  return 0;
}
int steps(vector<int> init, vector<int> expected, int steps_to_match, vector<vector<int>> banned)
{
  if (init[0] != expected[0])
  {
    int best = calc_distance(init[0], expected[0]);
    init[0] += best;
    if (init[0] > 9)
    {
      init[0] = 0;
    }
    else if (init[0] < 0)
    {
      init[0] = 9;
    }
    if (verify_banned(init, banned))
    {
      init[0] -= best;
    }
    else
    {
      steps_to_match++;
    }
  }
  if (init[1] != expected[1])
  {
    int best = calc_distance(init[1], expected[1]);
    init[1] += best;
    if (init[1] > 9)
    {
      init[1] = 0;
    }
    else if (init[1] < 0)
    {
      init[1] = 9;
    }
    if (verify_banned(init, banned))
    {
      init[1] -= best;
    }
    else
    {
      steps_to_match++;
    }
  }
  if (init[2] != expected[2])
  {
    int best = calc_distance(init[2], expected[2]);
    init[2] += best;
    if (init[2] > 9)
    {
      init[2] = 0;
    }
    else if (init[2] < 0)
    {
      init[2] = 9;
    }
    if (verify_banned(init, banned))
    {
      init[2] -= best;
    }
    else
    {
      steps_to_match++;
    }
  }
  if (init[3] != expected[3])
  {
    int best = calc_distance(init[3], expected[3]);
    init[3] += best;
    if (init[3] > 9)
    {
      init[3] = 0;
    }
    else if (init[3] < 0)
    {
      init[3] = 9;
    }
    if (verify_banned(init, banned))
    {
      init[3] -= best;
    }
    else
    {
      steps_to_match++;
    }
  }
  if (steps_to_match == 0)
  {
    printf("-1\n");
    return 0;
  }
  int aux_match = 0;
  for (int i = 0; i < 4; i++)
  {
    if (init[i] == expected[i])
    {
      aux_match++;
    }
  }
  if (steps_to_match > 20)
  {
    printf("-1\n");
    return 0;
  }
  if (aux_match != 4)
  {
    steps(init, expected, steps_to_match, banned);
  }
  if (aux_match == 4)
  {
    printf("%d\n", steps_to_match);
  }
  return 0;
}
int main()
{
  int test, count = 0;
  scanf("%d", &test);
  while (count < test)
  {
    vector<int> init, expected;
    for (int i = 0; i < test; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        int aux_insert = 0;
        scanf("%d", &aux_insert);
        if (i == 0)
        {
          init.push_back(aux_insert);
        }
        else
        {
          expected.push_back(aux_insert);
        }
      }
    }
    int length_locked = 0;
    vector<vector<int>> banned;
    scanf("%d", &length_locked);
    for (int i = 0; i < length_locked; i++)
    {
      vector<int> aux;
      for (int j = 0; j < 4; j++)
      {
        int aux_insert = 0;
        scanf("%d", &aux_insert);
        aux.push_back(aux_insert);
      }
      banned.push_back(aux);
    }
    steps(init, expected, 0, banned);
    count++;
  }
}
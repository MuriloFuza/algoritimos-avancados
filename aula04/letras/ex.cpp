#include <stdio.h>
#define MAX 5

using namespace std;

int main()
{

  char palavra[MAX + 1];
  palavra[MAX + 1] = '/0';

  for (char i = 'a'; i <= 'z'; i++)
  {
    palavra[0] = i;
    for (char j = 'a'; j <= 'z'; j++)
    {
      palavra[1] = i;
      for (char k = 'a'; k <= 'z'; k++)
      {
        palavra[2] = i;
        for (char l = 'a'; l <= 'z'; l++)
        {
          palavra[3] = i;
          printf("%s \n", palavra);
        }
      }
    }
  }

  return 0;
}
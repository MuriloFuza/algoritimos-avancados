#include <map>
#include <stdio.h>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
  map<char, char> m;
  char frase[100];
  map<char, char>::iterator p;

  m['W'] = 'Q';
  m['E'] = 'W';
  m['R'] = 'E';
  m['T'] = 'R';
  m['Y'] = 'T';
  m['U'] = 'Y';
  m['I'] = 'U';
  m['O'] = 'I';
  m['P'] = 'O';
  m['['] = 'P';
  m['S'] = 'A';
  m['D'] = 'S';
  m['F'] = 'D';
  m['G'] = 'F';
  m['H'] = 'G';
  m['J'] = 'H';
  m['K'] = 'J';
  m['L'] = 'K';
  m[';'] = 'L';
  m['X'] = 'Z';
  m['C'] = 'X';
  m['V'] = 'C';
  m['B'] = 'V';
  m['N'] = 'B';
  m['M'] = 'N';
  m[','] = 'M';
  m['.'] = ',';
  m[' '] = ' ';
  m['/'] = '.';

  do
  {
    fflush(stdin);
    memset(frase, 0, sizeof frase);
    fflush(stdin);
    fgets(frase, 256, stdin);
    fflush(stdin);

    for (int i = 0; i < 100; i++)
    {
      for (p = m.begin(); p != m.end(); p++)
      {
        if (p->first == frase[i])
        {
          printf("%c", p->second);
        }
      }
    }

    if (strcmp(frase, "\0") != 0)
      printf("\n");
  } while (strcmp(frase, "\0") != 0);

  return 0;
}
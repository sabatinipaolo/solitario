#include <stdio.h>
#include<string.h>


#define NUM_RIGHE 10
#define NUM_COLONNE 10

typedef struct
{
  int r, c;
} posizione;

typedef int tabellone[NUM_RIGHE][NUM_COLONNE];

void inizializza_tabellone(tabellone t)
{

  for (int r = 0; r < NUM_RIGHE; r++)
  {
    for (int c = 0; c < NUM_COLONNE; c++)
    {
      t[r][c] = -1 ;
    }
  }
}

void ele_to_string(int n, char s[2])
{
  if (n == -1)
    strcpy(s, "  ");
  else
  {
    int u = n % 10;
    int d = (n / 10) % 10;
    s[0] = '0' + u;
    if (d = 0)
      s[1] = ' ';
    else
      s[1] = '0' + d;

    if (n == 0)
      strcpy(s, "  0");
  }
}
void stampa_tabellone(tabellone t)
{

  for (int r = 0; r < NUM_RIGHE; r++)
  {
    for (int i = 0; i < NUM_COLONNE; i++)
      printf("-----");
    printf("-\n");

    for (int c = 0; c < NUM_COLONNE; c++)
    { char  s[2] ; 
      ele_to_string(t[r][c], s) ;
      printf("| %s ", s );
    }
    printf("|\n");
  }
}

int main()
{

  tabellone t;
  inizializza_tabellone(t);
  stampa_tabellone(t);
}
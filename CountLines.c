/*
This program is counting lines in desired stdin
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
*/

//Includes
#include <stdio.h>

//Variables declaration
int c;
int l_c = 1; // line counter

int main()
{
  while (EOF != (c = fgetc(stdin)))
  {
    if ('\n' == c)
    {
    	l_c++;
    }
  }
  printf("Lines in file: %d\n", l_c);

return 0;
}
/*
This program is removing spaces and tabs
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
*/

//Includes
#include <stdio.h>
#include <stdlib.h>

//Defines
#define FALSE 0
#define TRUE 1

//Main SpaceRemover
void SpaceRemover(FILE *in, FILE *out)
{
  char c;
  int double_space = FALSE;

  while ((c=fgetc(in))!=EOF) 
  {
	if ((c==' ' || c=='\t') && double_space == FALSE)
	{
	double_space = TRUE;
	fputc(' ',out);
	}
	else if ((c==' ' || c=='\t') && double_space == TRUE)
	{
	double_space = FALSE;
	}
	else
	fputc(c,out);
  }
}

//Body function (main)
int main()
{
  SpaceRemover(stdin, stdout);

  return EXIT_SUCCESS;
}
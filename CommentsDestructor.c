/*
Ten program przepisuje stdin na stdout usuwajac komentarze
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
*/

//Includes
#include <stdio.h>
#include <stdlib.h>

//Defines
#define FALSE 0
#define TRUE 1

void CopyRemovingComments(FILE *in, FILE *out)
{
char c, nc;
  int comment_flag = FALSE;
  int cudzyslow_flag = FALSE;

  while ((c=fgetc(in))!=EOF)
  {
    if (comment_flag) // cf==TRUE
    {
      if (c=='*')
      {
        nc=fgetc(in);
        if (nc=='/')
          comment_flag=FALSE;
        else
          ungetc(nc,in);
      }
    }
    else // cf==FALSE
    {
      if (c=='"' && cudzyslow_flag==FALSE)
      {
        cudzyslow_flag=TRUE;
      }
      else if (c=='"' && cudzyslow_flag==TRUE)
      {
        cudzyslow_flag=FALSE;
      }
      else if (c=='/' && cudzyslow_flag==FALSE)
      {
        nc=fgetc(in);
        if (nc=='*')
          comment_flag=TRUE;
        else
          ungetc(nc,in);
      }
      if (!comment_flag)
        fputc(c,out);
    }
  }
}
void help()
{
  //printf("Ten program przepisuje stdin na stdout usuwajac komentarze `CommentsDesctructor.c'\n");
  //printf("a kod zapisuje do pliku o unikalnej nazwie\n");
  //printf("zaczynającej się od: CommentsDesctructor_.\n");
  //printf("BŁĘDY: komentarze w napisach /* takie jak ten */ też są usuwane.\n");
  fprintf (stderr, "Ten program przepisuje stdin na stdout usuwajac komentarze\n");
}

int main()
{
  help();
  CopyRemovingComments(stdin, stdout);

  return EXIT_SUCCESS;
}
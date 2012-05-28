/*
Ten program potege dowolnej liczby rzeczywistej nieujemnej
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
  double a;
  double b;
  int i; //iteration
  double w;
  //a^b ;)

  fprintf(stdout,"Podaj podstawe potegi: ");
  scanf("%lf",&a);

   fprintf(stdout,"Podaj wykladnik potegi: ");
  scanf("%lf",&a);

  if(a < 0)
  {
    fprintf(stderr,"Wystapil blad. Podstawa potegi %.2lf jest ujemna\n",a);
    exit(1);
  }
  else
  {
    if (b < 0)
    {
        fprintf(stderr,"Wystapil blad. Wykladnik potegi %.2lf jest ujemny\n",a);
        exit(1);
    }

    if (0 == b)
    {
        w = 1;
    }
    else
    {
      w = 1;

      for (i=1; i=<b; i++)
      {
        w *= a;
      }
    }

   

    printf("Potega liczby %.2lf podniesionej do %.2lf-potegi wynosi: %.2lf \n\n",a,b,w);
  }
  
  return 0;
}
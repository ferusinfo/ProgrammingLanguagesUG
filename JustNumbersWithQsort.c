/*
Napisz program, który prosi użytkownika o wprowadzenie n liczb
z klawiatury, a następnie wypisze sumę, iloczyn, najmniejszą i
największą z wprowadzonych liczb. (Using Qsort)
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;
int ile;
int *tablica;
int wynik_iloczynu = 1;
int wynik_dodawania = 0;

// Porównywacz
int compare_nums (const void * a, const void * b)
{
    int _a = *(int*)a;
    int _b = *(int*)b;
    return ( _a - _b );
}

void sortArray(int *tablica)
{
  qsort(tablica, ile, sizeof(int), compare_nums);
}

void suma(int *tablica)
{
  for(i=0;i<=ile-1;i++)
  {
    wynik_dodawania += tablica[i];
  }
}

void iloczyn(int *tablica)
{
  for(i=0;i<=ile-1;i++)
  {
    wynik_iloczynu *= tablica[i];
  }
}

void userPrompt()
{
  puts("Podaj ile bedziesz wprowadzal wartosci: ");
  scanf("%d", &ile);
}

void inputLoop(int *tablica)
{
  for(i=0;i<=ile-1;i++)
  {
    printf("Wprowadz liczbe %i: ",i+1);
    scanf("%i",&tablica[i]);
  }
}

void printMyArray(int *tablica)
{
  for(i=0;i<=ile-1;i++)
  {
    printf("%i ",tablica[i]);
  }
}

int main(void)
{ 
  userPrompt();
  tablica = malloc(ile *sizeof(int));
  inputLoop(tablica); 
  suma(tablica);
  iloczyn(tablica);
  sortArray(tablica);

  printf("Suma liczb: %i\n", wynik_dodawania);
  printf("Iloczyn liczb: %i\n", wynik_iloczynu);
  printf("Posortowana tablica: { "); printMyArray(tablica); printf("}\n");
  printf("Najmniejszy element tablicy to: %i\n",tablica[0]);
  printf("Najwiekszy element tablicy to: %i\n", tablica[ile-1]);
  return 0;
}
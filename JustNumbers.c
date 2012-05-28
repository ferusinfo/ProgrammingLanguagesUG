/*
 *Napisz program, który prosi użytkownika o wprowadzenie trzech liczb 
 *z klawiatury, a następnie wypisze sumę, iloczyn, najmniejszą i
 *największą z wprowadzonych liczb.
 *Dialog na terminalu powinien wyglądać tak:
 *
 *Wprowadź trzy liczby całkowite: 1 2 3
 *Suma wynosi: 6
 *Iloczyn wynosi: 6
 *Najmniejsza liczba to: 1
 *Największa liczba to: 3
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a, int b, int c){
  int min;

  if(a > b){
    if(b > c)
      min = c;
    else
      min = b;
  }
  else{
    if(a > c)
      min = c;
    else
      min = a;
  }
  return min;
}
int max(int a, int b, int c){
  int max;
  if(a < b){
    if(b < c)
      max = c;
    else
      max = b;
  }
  else{
    if( a < c)
      max = c;    
    else
      max = a;
  }
  return max;
}

int suma(int a, int b, int c){
  return a+b+c;
}

int iloczyn(int a, int b, int c){
  return a*b*c;
}

int main(void){
  int a,b,c;

  printf("Wprowadź trzy liczby całkowite: ");
  scanf("%d %d %d",&a,&b,&c);
  
  printf("Suma wynosi: %d\nIloczyn wynosi: %d\nNajmniejsza liczba to: %d\nNajwiększa liczba to: %d\n",suma(a,b,c),iloczyn(a,b,c),min(a,b,c),max(a,b,c));
  return 0;
}
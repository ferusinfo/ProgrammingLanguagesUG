/*
Ten program liczy rekurencyjnie NWD ze wzoru Euklidesa
Dział Rekurencje - zadanie 4
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
*/

//Includes
#include <stdio.h>

//Get Data
void getNumbers(int *a, int *b)
{
	printf("Podaj liczbe a:  ");
	scanf("%i", a);
	printf("Podaj liczbe b:  ");
	scanf("%i", b);
}

int CalculateWithRecursion(int a, int b)
{
	while (a*b != 0)
	{
		if (a >= b)
		{
			return CalculateWithRecursion(a%b,b);
		}
		else
		{
			return CalculateWithRecursion(a,b%a);
		}
	}
	return a+b;
}

int main()
{
	int a, b;

	getNumbers(&a, &b);
	printf("NWD: %i \n\n", CalculateWithRecursion(a,b));

	return 0;
}
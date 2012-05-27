/*
This program is calculating rectangle field
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
*/

//Includes
#include <stdio.h>

//Get Data
void get(int *a, int *b)
{
	printf("Set a:  ");
	scanf("%i", a);
	printf("Set b:  ");
	scanf("%i", b);
}

//Calculate Them
int calculate(int a, int b)
{
	return a * b;
}

//..and print results
void print_result(int w, int h, int field)
{
	printf("Rectangle field :  %i x %i = %i\n", w, h, field);
}

int main()
{
	//Variables declaration
	int a, b;
	
	get(&a, &b);
	calculate(a, b);
	print_result(a, b, calculate(a, b));

	return 0;
}
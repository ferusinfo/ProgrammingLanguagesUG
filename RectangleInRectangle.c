/*
This program is calculating if rectangle is in another rectangle area
@autor Maciej Kolek 5E
2012 Uniwersytet Gdanski
*/

//Includes
#include <stdio.h>
#include <stdlib.h>

//struct declaration
struct point{int x; int y;};

struct rect{ struct point ll; struct point ur;};

//Let's make a point
struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

//Point in Rectangle
int ptinrect(struct point p,struct rect r){
	return p.x >= r.ll.x && p.x < r.ur.x && p.y >= r.ll.y && p.y < r.ur.y;
};

//Rectangle in rectangle?
int rectinrect(struct rect r1, struct rect r2){
	if(ptinrect(r1.ll,r2) == 1 && ptinrect(r1.ur,r2) == 1)
	{
		return 1;
	}
	else
	{ 
		return 0;
	}
}

int main()
{
	//Variables declaration
	int x1,x2,y1,y2;
	struct point p3,p4,p1,p2;

	printf("Please insert first rectangle coordinates: x1,y1 and x2,y2:\n");
	scanf("%i",&x1);
	scanf("%i",&y1);
	scanf("%i",&x2);
	scanf("%i",&y2);
	p1.x=x1; p1.y=y1;
	p2.x=x2; p2.y=y2;

	struct rect r1;
	r1.ll=p1; r1.ur=p2;

	printf("Please insert second rectangle coordinates: x1,y1 i x2,y2:\n");
	scanf("%i",&x1);
	scanf("%i",&y1);
	scanf("%i",&x2);
	scanf("%i",&y2);
	p3.x=x1; p3.y=y1;
	p4.x=x2; p4.y=y2;

	struct rect r2;
	r2.ll=p3; r2.ur=p4;

	if(rectinrect(r1,r2) == 1)
	{
		printf("Prostokat r1 zawiera sie w prostokacie r2.\n");
	}
	else 
	{
		printf("Prostokat r1 nie zawiera sie w prostokacie r2.\n");
	}
	return 0;
}
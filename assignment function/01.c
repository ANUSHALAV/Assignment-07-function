//wap to calculate area of circle (tsrs)
#include<stdio.h>
#include<conio.h>
#include "fon1.c"
main()
{
	float r,a;
	printf("enter the redius = ");
	scanf("%f",&r);
	a=area(r);
	printf("area of circle = %f",a);
	getch();
}

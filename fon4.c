#include<stdio.h>
#include<conio.h>
void even(int a);
void even(int a)
{
	int i;
	printf("even number is = ");
	for(i=1;i<=a;i++)
	{
		if(i%2==0)
		printf("%d,",i);
	}
	getch();	
}

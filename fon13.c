#include<stdio.h>
#include<conio.h>
int p(int,int);
int p(int a,int b)
{
	int i,j;
	for(i=a;i<=b;i++)
	{
	  j=i%2;
	  if(j!=0)
	  printf("%d,",i);
    }
    getch();
}

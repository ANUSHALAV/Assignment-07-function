int sq(int a);
int sq(int a)
{
	int i,j=0,b=0;
	for(i=1;i<=a;i++)
	{
		j=i*i;
		b+=j;
	}
	return b;
}

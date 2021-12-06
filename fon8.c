//waf to calculate factoreal number...

int facto(int a);
int facto(int a)
{
	int i=1;
	while(a)
	{
		i*=a;
		a--;
	}
	return i;
}

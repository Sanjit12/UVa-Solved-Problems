#include<stdio.h>
#include<string.h>
char p[500001];
long i, j;
int sieve()
{
	memset(p, 1, sizeof(p));
	p[0] = 0;
	for (i = 3; i < 1001; i += 2)
	{
		if (p[(i - 1) / 2])
		{
			j = 3 * i;
			while (j < 1000001)
			{
				p[(j - 1) / 2] = 0;
				j = j + i + i;
			}
		}
	}
}

int prime(long a)
{
	if (a == 2)
		return 1;
	else if (a % 2 == 0)
		return 0;
	else
		return p[(a - 1) / 2];
}

int main()
{
	sieve();
	long a,c, r,t;
	while (scanf("%ld", &a) == 1)
	{
	    if(!a)break;
		t = a;
		c=0;
		for (i = 2; t>1; i++)
		{
			if (prime(i) && !(t % i))
			{
				c++;
				while (!(t % i))
				{
					t /= i;
				}
			}
		}
		printf("%ld : %ld\n", a,c);
	}
	return 0;
}
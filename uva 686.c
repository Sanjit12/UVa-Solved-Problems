#include<stdio.h>
#include<math.h>
int prime(long n)
{
	long r, f = 1, b, i;
	r = sqrt(n);
	for (i = 2; i <= r; i++)
	{
		if (n % i == 0)
		{
			f = 0;
			break;
		}
	}
	if (n == 0 || n == 1)
		return 0;
	return f;
}

int main()
{
	long a, b, c, n, i, r, cnt = 0;
	while (scanf("%ld", &n) == 1)
	{
		if (n == 0)
			break;
		r = n / 2;
		for (i = 2; i <= r; i++)
		{
			if (prime(i))
			{
				b = n - i;
				if (prime(b))
				{
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
	return 0;
}
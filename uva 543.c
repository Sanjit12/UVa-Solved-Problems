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
	if(n==0)return 0;
	return f;
}

int main()
{
	long a, b, c, n, i;
	while (scanf("%ld", &n) == 1)
	{
		if (n <= 0)
			break;

		for (i = 2; i <= n; i++)
		{
			if (prime(i))
			{
				b = n - i;
				if (prime(b))
				{
					printf("%ld = %ld + %ld\n", n, i, b);
					break;
				}
			}
		}
		if(i>n&&n%2==0)
		printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int t, p[51];
	long n, i, c, j,tem;
	scanf("%ld", &n);
	while (n--)
	{
		scanf("%d", &t);
		for (i = 0; i < t; i++)
		{
			scanf("%d", &p[i]);
		}
		for (i = 0; i < t - 1; i++)
		{
			for (j = 0; j < t - i - 1; j++)
			{
				if (p[j] > p[j + 1])
				{
					tem = p[j];
					p[j] = p[j + 1];
					p[j + 1] = tem;
					c++;
				}
			}
		}
		printf("Optimal train swapping takes %ld swaps.\n", c);
		c = 0;
	}
	return 0;
}
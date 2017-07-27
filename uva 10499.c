#include<stdio.h>
int main()
{
	long n;
	double b;
	while (scanf("%ld", &n) == 1)
	{
		if (n < 0)
			break;
		if (n == 1)
			printf("0%%\n");
		else
		{
			b = 25.0 * n;
			printf("%.lf%%\n", b);
		}
	}
	return 0;
}
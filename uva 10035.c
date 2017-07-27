#include<stdio.h>
int main()
{
	long long a, b, c = 0, s, car = 0;
	while (scanf("%lld%lld", &a, &b) == 2)
	{
	    c=0;
	    car=0;
	    if(!a&&!b)break;
		for (; a > 0 || b > 0;)
		{
			s = (a % 10) + (b % 10) + c;
			if (s > 9)
			{
				c = 1;
				car++;
			}
			else
				c = 0;
			a /= 10;
			b /= 10;
		}
		if (car == 0)
			printf("No carry operation.\n");
		else if (car == 1)
			printf("1 carry operation.\n");
		else
			printf("%lld carry operations.\n", car);
	}
	return 0;
}
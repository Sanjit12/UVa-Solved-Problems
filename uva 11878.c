#include<stdio.h>
int main()
{
	int a, b, p = 0, t = 0, i = 0;
	char s, c[5];
	while (scanf("%d%c%d=%s", &a, &s, &b, c) == 4)
	{
		if (c[0] != '?')
		{
			while (c[i])
			{
				t = t * 10 + (c[i] - '0');
				i++;
			}
		}
		else
			t = -1;
	 	i=0;
		 if (s == '+')
		{
			if ((a + b) == t)
			{
				p++;
			}
		}
		else
		{
			if ((a - b) == t)
			{
				p++;
			}
		}
		t=0;
	}
	printf("%d\n", p);
	return 0;
}
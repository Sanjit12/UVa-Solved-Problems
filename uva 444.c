#include<stdio.h>
#include<string.h>
int main()
{
	char c[300];
	int a, i, j = 0, len, b;
	while (gets(c) != NULL)
	{
		if (c[0] >= '0' && c[0] <= '9')
		{
			len = strlen(c);
			for (len--, j = 0; len >= 0; len--)
			{
				j = j * 10 + (c[len] - '0');
	if ((j >= 65 && j <= 90) || (j >= 97 && j <= 122)|| (j == 32 || j == 33 || j == 44 || j == 46 || j == 58|| j == 59 || j == 63))
				{
					printf("%c", j);
					j = 0;
				}
			}
		}
		else
		{
			len = strlen(c);
			for (len--; len >= 0; len--)
			{
				a = c[len];
				while (a > 0)
				{
					printf("%d", a % 10);
					a /= 10;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
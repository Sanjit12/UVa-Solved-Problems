#include<stdio.h>
#include<string.h>

#define len(x) (strlen(x))

int main()
{
	char p[6];
	int a, d, b;
	scanf("%d", &b);
	while (b--)
	{
		scanf("%s", &p);
		d = len(p);
		if (d < 4)
		{
			if (p[0] == 'o' && (p[1] == 'n' || p[2] == 'e'))
			{
				printf("1\n");
			}
			else if (p[1] == 'n' && (p[0] == 'o' || p[2] == 'e'))
			{
				printf("1\n");
			}
			else
			{
				printf("2\n");
			}
		}
		else
			printf("3\n");
	}
	return 0;
}
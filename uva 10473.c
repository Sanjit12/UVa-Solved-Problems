#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char num[100], hex[100];
	long i, j = 0, len;
	while (scanf("%s", num) == 1)
	{
		j = 0;
		if (num[0] == '-')
			break;
		if (num[1] == 'x')
		{
			len = strlen(num) - 3;
			for (i = 2; num[i]; i++, len--)
			{
				if (num[i] >= '0' && num[i] <= '9')
					j += (num[i] - '0') * pow(16, len);
				else
					j += (num[i] - 55) * pow(16, len);
			}
			printf("%ld\n", j);
		}
		else
		{
			for (i = 0; num[i]; i++)
			{
				j = j * 10 + (num[i] - '0');
			}
			for (i = 0; j > 0 ; i++)
			{
				len = j % 16;
				if (len < 10)
				{
					hex[i] = (len + '0');
				}
				else
				{
					hex[i] = ('A' + len - 10);
				}
				j /= 16;
			}
			printf("0x");
			while (i--)
				printf("%c", hex[i]);
			printf("\n");
		}
	}
	return 0;
}
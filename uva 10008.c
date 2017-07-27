#include<stdio.h>
#include<string.h>
int main()
{
	long a, b, i, j,c[27],t;
	char ch,k[27];
	scanf("%ld", &a);
	getchar();
	memset(c, 0, sizeof(c));
	while (a--)
	{
		while ((ch = getchar()) != '\n')
		{
			if (ch >= 'a' && ch <= 'z')
			{
				i = ch - 'a';
				c[i]++;
				k[i]=i+'A';
			}
			else if (ch >= 'A' && ch <= 'Z')
			{
				i = ch - 'A';
				c[i]++;
				k[i]=ch;
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < 26 - i - 1; j++)
		{
			if (c[j]< c[j + 1])
			{
				t = c[j];
				 c[j] = c[j + 1];
				c[j + 1] = t;
				ch=k[j];
				k[j]=k[j+1];
				k[j+1]=ch;
			}
		}
	}
	j = 0;
	for (i = 0; i < 26; i++)
	{
		if (c[i])
			printf("%c %ld\n",k[i], c[i]);
	}
	return 0;
}
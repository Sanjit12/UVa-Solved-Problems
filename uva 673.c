#include<stdio.h>
#include<string.h>
char st[200];
int top = -1;
int push(char c)
{
	st[++top] = c;
}

int pop()
{
	top--;
}

int chk(char a, char b)
{
	if (a == '(' && b == ')')
		return 1;
	if (a == '[' && b == ']')
		return 1;
	return 0;
}

int main()
{
	char par[300];
	int n, i, len, j;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		gets(par);
		len = strlen(par);
		if(len%2==1)
	    {
	        printf("No\n");
	        continue;
	    }
		 for (i = 0; par[i]; i++)
		{
			if (par[i] == ' ')
			{
				continue;
			}
			if (chk(st[top], par[i]))
			{
				pop();
			}
			else
				push(par[i]);
		}
		if (top < 0 || par[0] == '\n')
			printf("Yes\n");
		else
			printf("No\n");
		top = -1;
	}
	return 0;
}
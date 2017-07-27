#include<stdio.h>
int main()
{
	int a, b, i = 1, d,f,r;
	while (scanf("%d%d", &a, &b) == 2)
	{
		if (!a && !b)
			break;
		d = a-b;
		f=d/b;
		r=d%b;
		if(r>0)
		{
		    f++;
		}
		 if (f <= 26)
		{
			printf("Case %d: %d\n", i++, f);
		}
		else
			printf("Case %d: impossible\n", i++);
	}
	return 0;
}
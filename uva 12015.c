#include<stdio.h>
#include<string.h>
int main()
{
	char u[101][101], p[101];
	int a, i = 1, n, k = 0, max,j=0;
	scanf("%d", &n);
	while (i <= n)
	{
	    max=0;
	    j=0;
		for (k = 0; k < 10; k++)
		{
			scanf("%s %d", p, &a);
			if (a > max)
			{
				max = a;
				j = 0;
				strcpy(u[j], p);
				j++;
			}
			else if (a == max)
			{
				strcpy(u[j], p);
				j++;
			}
		}
		printf("Case #%d:\n",i);
		for(k=0;k<j;k++)
		printf("%s\n",u[k]);
		i++;
	}
	return 0;
}
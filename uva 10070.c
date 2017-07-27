#include<stdio.h>
int div(char *y, int d)
{
	int i, c = 0;
	for (i = 0; y[i]; i++)
	{
		c = (c * 10 + (y[i] - '0')) % d;
	}
	if (c == 0)
		return 1;
	return 0;
}
int main()
{
	char y[1000000];
	int b = 0, c=0,p=0;
	while (scanf("%s", y) ==1)
	{
	    if(p!=0)
	    printf("\n");
	    p=1;
		if ((div(y, 4) && !div(y, 100)) || div(y, 400))
		{
			b = 1;
			printf("This is leap year.\n");
		}
		if (div(y, 15))
		{
		    c=1;
			printf("This is huluculu festival year.\n");
		}
		if (b)
		{
			if (div(y, 55))
			{
				printf("This is bulukulu festival year.\n");
			}
		}
		if(!c&&!b)
		{
		    printf("This is an ordinary year.\n");
		}
		b=0;
		c=0;
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char num[1001];
	long a, b, i,j,sum,s,p;
	while (scanf("%s",num))
	{
		if (!strcmp(num, "0"))
			break;
        sum=0;
        p=0;
        j=0;
		for (i = 0; num[i]; i++)
		{
			sum += num[i] - '0';
		}
		s = sum;
		for (p = 1; s > 9; p++)
		{
			while (s> 0)
			{
				j+= s % 10;
				s/= 10;
			}
			s = j;
			j=0;
		}
		if(s==9)
		{
		     printf("%s is a multiple of 9 and has 9-degree %ld.\n",num,p);
		}
		else
		printf("%s is not a multiple of 9.\n",num);
	}
	return 0;
}

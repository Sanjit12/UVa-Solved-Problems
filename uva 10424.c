#include<stdio.h>
#include<string.h>
int sumdig(int n)
{
	int i=0;
	while(n>9)
	{
		i=n%10;
		n/=10;
		n+=i;
	}
	return n;
}
int main()
{
    char c[28], d[28];
    int i, j, s, k, t;
    double r;
    while (gets(c)!=NULL)
    {
        gets(d);
        s = 0;
        t = 0;
        for (i = 0; c[i]; i++)
        {
            if (c[i] >= 'a' && c[i] <= 'z')
            {
                s += (c[i] - 'a' + 1);
            }
            else if (c[i] >= 'A' && c[i] <= 'Z')
            {
                s += (c[i] - 'A' + 1);
            }
        }
        s=sumdig(s);
        for (i = 0; d[i]; i++)
        {
            if (d[i] >= 'a' && d[i] <= 'z')
            {
                t += (d[i] - 'a' + 1);
            }
            else if (d[i] >= 'A' && d[i] <= 'Z')
            {
                t += (d[i] - 'A' + 1);
            }
        }
        t=sumdig(t);
        if (s == 0 && t == 0)
        {
            printf("\n");
        }
        else if ((s > 0 && t == 0) || (t > 0 && s == 0))
        {
            printf("0.00 %%\n");
        }
        else if (s > t)
        {
            r = (((double)t * 100.0)/ (double)s );
            printf("%.2lf %%\n", r);
        }
        else
        {
            r = (((double)s * 100.0/ (double)t) );
            printf("%.2lf %%\n", r);
        }

    }
    return 0;
}

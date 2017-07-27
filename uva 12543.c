#include<stdio.h>
#include<string.h>
int main()
{
	char n[102], p[101] ,h[102];
	int i, j = 0, len, max = 0;
	while (scanf("%s", n) == 1)
	{
	    j=0;
		if (!strcmp(n, "E-N-D"))
			break;
	    len=strlen(n);
		for (i = 0; n[i]; i++)
		{
			if (n[i] >= 'A' && n[i] <= 'Z')
			{
				p[j++] = n[i] - 'A' + 'a';
			}
			else if ((n[i] >= 'a' && n[i] <= 'z') || (n[i] == '-'))
			{
				p[j++] = n[i];
			}
			else if(i!=len-1)
			j=0;
		}
		p[j] = '\0';
	    len=strlen(p);
	    if(len>max)
	    {
	        max=len;
	        strcpy(h,p);
	    }
	}
	 printf("%s\n", h);
	return 0;
}
#include<stdio.h>
int num[5001];
int digit_repeat(int n)
{
	int arr[10],i;

	for(i=0;i<10;i++)arr[i]=0;

	for(i=0;n;i++)
	{
		arr[n%10]++;
		n/=10;
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]>1)
		{
			return 1;
		}
	}
	return 0;
}
int f()
{
	int i;

	for(i=0;i<5001;i++)
	{
		if(digit_repeat(i))
		{
			num[i]=0;
		}
		else
		{
			num[i]=1;
		}
	}
	for(i=1;i<5001;i++)
	{
		num[i]+=num[i-1];
	}
}
int main()
{
	f();
	int n,m;
	while(scanf("%d%d",&n,&m)==2)
	{
		printf("%d\n",num[m]-num[n-1]);
	}
	return 0;
}

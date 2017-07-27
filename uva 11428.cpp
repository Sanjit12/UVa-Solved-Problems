#include<stdio.h>
#include<math.h>
int x[10001];
int y[10001];
int find()
{
    int i,j,n;
    for(j=1; j<57; j++)
    {
        n=0;
        for(i=j+1;; i++)
        {
            n=(i*i*i)-(j*j*j);
            if(n>10000)
            {
                break;
            }
            if(x[n]==0&&y[n]==0)
            {
                x[n]=i;
                y[n]=j;
            }
        }
    }
}
int main()
{
    find();
    int n,f=0,i,j,a,b;
    while(scanf("%d",&n)==1&&n)
    {
        if(x[n]==0&&y[n]==0)
        {
            printf("No solution\n");
        }
        else
            printf("%d %d\n",x[n],y[n]);
    }
    return 0;
}

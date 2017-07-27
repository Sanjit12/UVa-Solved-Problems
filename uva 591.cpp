#include<stdio.h>
int main()
{
    int n,h[101],i,sum,move,c=1;
    while(scanf("%d",&n)==1&&n)
    {
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        sum/=n;
        move=0;
        for(i=0; i<n; i++)
        {
            if(h[i]>sum)
            {
                move+=(h[i]-sum);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",c,move);
        c++;
    }

    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    double d,u,v,t1,t2;
    int n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%lf%lf%lf",&d,&u,&v);
        if(v==0||u==0||u>=v)
        {
            printf("Case %d: can\'t determine\n",i);
            i++;
            continue;
        }
        t1=d/v;
        t2=d/(sqrt(pow(v,2)-pow(u,2)));
        printf("Case %d: %.3lf\n",i,fabs(t2-t1));
        i++;
    }
    return 0;
}


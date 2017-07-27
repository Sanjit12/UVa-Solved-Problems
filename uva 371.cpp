#include<stdio.h>

int main()
{
    long long a,b,c,i,j,cnt,s,m,p,t;
    while(scanf("%lld%lld",&a,&b)==2&&a&&b)
    {
        cnt=0;
        s=0;

        if(b<a)
        {
            t=a;
            a=b;
            b=t;
        }
        p=a;
        for(; a<=b; a++)
        {
            cnt=1;
            i=a;
            if(i%2==0)
            {
                i/=2;
            }
            else
            {
                i=3*i+1;
            }
            while(i!=1)
            {
                if(i%2==0)
                {
                    i/=2;
                    cnt++;
                }
                else
                {
                    i=(3*i+1);
                    cnt++;
                }
            }
            if(cnt>s)
            {
                s=cnt;
                m=a;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",p,b,m,s);
    }

    return 0;
}

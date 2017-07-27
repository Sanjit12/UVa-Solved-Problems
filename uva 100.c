#include<stdio.h>
int main()
{
      long long a,b,d,e,t=0,i=0,sum,k,p=0;
      while(scanf("%lld%lld",&a,&b)==2)
      {
            p=0;
            d=a;
            e=b;
            if(a>b)
            {
                  t=a;
                  a=b;
                  b=t;
            }
      for(;a<=b;a++)
      {
            for(k=a,i=1;k>1;i++)
            {
                if(k%2==1)
                  k=3*k+1;
                else
                  k=k/2;
            }
            if(i>=p)
                  p=i;
      }
          printf("%lld %lld %lld\n",d,e,p);

      }
      return 0;
}

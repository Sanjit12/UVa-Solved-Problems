#include<stdio.h>
int main()
{
    long a,b,c=1,i=1,t,f=0;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        t=a;
        if(a<0&&b<0)break;
        for(;a>1;)
        {
            if(!(a%2))
            {
                a=a/2;
                c++;
            }
            else
            {
                a=3*a+1;
                c++;
                if(a>b)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
                printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",i,t,b,c-1);
        }
        else
        printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",i,t,b,c);
        f=0;
        i++;
        c=1;
    }
    return 0;
}
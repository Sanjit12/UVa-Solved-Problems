#include<stdio.h>
int main()
{
    long a,b,f,n,i=1,m;
    scanf("%ld",&n);
    while(i<=n)
    {
        f=0;
        scanf("%ld",&a);
        for(b=0;b<a;b++)
        {
            scanf("%ld",&m);
            if(m>f)
            f=m;
        }
        printf("Case %ld: %ld\n",i,f);
        i++;
    }
    return 0;
}
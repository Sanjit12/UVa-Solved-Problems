#include<stdio.h>
int main()
{
    int b,n,cola=0,cnt;
    while(scanf("%d",&n)==1)
    {
        cola=n;
        while(n>1)
        {
            if(n==2)
            {
                n+=1;
            }
            b=(n/3);
            cola+=b;
            n=(n%3);
            n+=b;
        }
        printf("%d\n",cola);

    }
    return 0;
}

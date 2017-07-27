#include<stdio.h>
int main()
{
    int a,b,c,s=0,r,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        a+=b;
        for(;a>c-1;)
        {
            r=a%c;
            s+=a/c;
            a=(a/c)+r;
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
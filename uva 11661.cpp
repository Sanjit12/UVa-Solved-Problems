#include<stdio.h>
char ch;
int main()
{
    int l,i,j=1,k,dis,d,a,b;
    while(scanf("%d",&l)==1&&l)
    {
        dis=2100000000;
        getchar();
        a=0;
        b=0;
        for(i=1;i<=l;i++)
        {
            scanf("%c",&ch);
            if(ch=='Z')
                dis=0;
            if(ch=='R')
            {
                a=i;
                if(b)
                {
                    d=i-b;
                    if(d<dis)
                    {
                        dis=d;
                    }
                }
            }
            if(ch=='D')
            {
                if(a)
                {
                    d=i-a;
                    if(d<dis)
                    {
                        dis=d;
                    }
                }
                b=i;
            }
        }
        printf("%d\n",dis);
    }
    return 0;
}

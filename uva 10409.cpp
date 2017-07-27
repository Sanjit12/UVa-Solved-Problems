#include<stdio.h>
int main()
{
    char dir[6];
    int t,e,w,n,s,i,j,b,tem;
    while(scanf("%d",&j)==1&&j)
    {
        getchar();
        t=1;
        n=2;
        w=3;
        e=4;
        s=5;
        b=6;
        for(i=0;i<j;i++)
        {
            scanf("%s",dir);
            if(dir[0]=='n')
            {
                tem=t;
                t=s;
                s=b;
                b=n;
                n=tem;
            }
            else if(dir[0]=='e')
            {
                tem=t;
                t=w;
                w=b;
                b=e;
                e=tem;
            }
            else if(dir[0]=='s')
            {
                tem=t;
                t=n;
                n=b;
                b=s;
                s=tem;
            }
            else
            {
                tem=t;
                t=e;
                e=b;
                b=w;
                w=tem;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}

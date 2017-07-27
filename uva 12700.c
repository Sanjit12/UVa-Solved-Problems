#include<stdio.h>
int main()
{
    char m;
    int i=1,j,n,b,w,a,d,p;
    scanf("%d",&n);
    while(i<=n)
    {
        b=w=a=d=0;
        scanf("%d",&p);
        for(j=0; j<=p; j++)
        {
            scanf("%c",&m);
            if(m=='B')
                b++;
            if(m=='W')
                w++;
            if(m=='A')
                a++;
            if(m=='T')
                d++;
        }
        p-=a;
        printf("Case %d: ",i);
        if(p==0)
            printf("ABANDONED\n");
        else if(b==p)
            printf("BANGLAWASH\n");
        else if(w==p)
            printf("WHITEWASH\n");
        else if(b>w)
            printf("BANGLADESH %d - %d\n",b,w);
        else if(w>b)
            printf("WWW %d - %d\n",w,b);
        else if(b==w)
        {
            printf("DRAW %d %d\n",w,d);
        }
        i++;
    }
    return 0;
}

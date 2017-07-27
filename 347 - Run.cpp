#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
    int k=0,d,cnt=0;
    while(n)
    {
        cnt++;
        d = n%10;
        if(k&(1<<d)||d==0)
            return 0;
        k|=(1<<d);
        n/=10;
    }
    return cnt;
}

int main()
{
    int n,cas=1;
    while(scanf("%d",&n),n)
    {
        int ar[8];
        for(int i=n;; i++)
        {
            int t=i;
            memset(ar,0,sizeof ar);
            int c=check(t);
            if(c)
            {
                for(int j=c-1; j>=0; j--)
                {
                    ar[j]=t%10;
                    t/=10;
                }
                int s=c,rem=0;
                int fd=ar[0];
                int tem=fd,k=0;
                while(s--)
                {
                    if(k&(1<<fd))
                    {
                        fd=-1;
                        break;
                    }
                    k|=(1<<fd);
                    rem = (fd+rem)%c;
                    fd = ar[rem];
                }
                if(tem==fd)
                {
                    cout<<"Case "<<cas++<<":"<<' '<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

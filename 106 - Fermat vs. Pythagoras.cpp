#include<bits/stdc++.h>
using namespace std;
#define gcd(x,y) __gcd(x,y)

int gcd3(int x,int y,int z)
{
    return gcd(x,gcd(y,z));
}
vector<tuple<int,int,int>> pt;
int num[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int in=1,N=1001;
    for(int i=1; i<N; i++)
    {
        for(int j=1; j<i; j++)
        {
            if(gcd(i,j)==1&&(i%2==0||j%2==0))
            {
                int m=i*i-j*j;
                int n=2*i*j;
                int p=i*i+j*j;
                pt.push_back(make_tuple(m,n,p));
            }
        }
    }
    //sort(pt.begin(),pt.end());
    int x,y,n;
    while(scanf("%d",&n)==1)
    {
        int cnt=0,p=0;
        for(auto it:pt)
        {
            int x=get<0>(it);
            int y=get<1>(it);
            int z=get<2>(it);
            if(x>n&&y>n&&z>n)
                break;
            if(x<=n&&y<=n&&z<=n)
            {
                //printf("%d %d %d\n",x,y,z);
                cnt++;
                for(int i=1;z*i<n+1;i++)
                {
                    num[x*i]=num[y*i]=num[z*i]=1;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(num[i]==0)
                p++;
            num[i]=0;
        }
        printf("%d %d\n",cnt,p);
    }
    return 0;
}

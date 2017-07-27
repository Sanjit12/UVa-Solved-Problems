#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<stack>
#include<queue>
#include<vector>
#include<deque>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<cstdarg>
#include<cassert>
#include<cctype>

using namespace std;

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define sci(a) scanf("%d",&a)
#define scl(a) scanf("%ld",&a)
#define scll(a) scanf("%lld",&a)
#define scf(a) scanf("%f",&a)
#define scd(a) scanf("%lf",&a)
#define scs(a) scanf("%s",a)
#define For(k,n) for(k=1;k<=n;k++)
#define pb(n) push_back(n)
#define pri(a) printf("%d",a)
#define prl(a) printf("%ld",a)
#define prll(a) printf("%lld",a)
#define prf(a) printf("%f",a)
#define prd(a) printf("%lf",a)
#define prld(a) printf("%Lf",a)
#define prc(a,b) printf("Case %d: %d\n",a,b)
#define prs(a) printf("%s",a)
#define in freopen("in.txt","r",stdin)
#define out freopen("out.txt","w",stdout)

int sc()
{
    int a=0;
    char ch;
    while((ch=getchar()))
    {
        if(ch=='\n'||ch==' ')
            break;
        a=a*10+(ch-'0');
    }
    return a;
}

int main()
{
    map<int ,int > mp;
    int a;
    vector<int > v;

    while(scanf("%d",&a)!=EOF)
    {
        if(mp[a]==0)v.push_back(a);
        mp[a]++;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }
    return 0;
}


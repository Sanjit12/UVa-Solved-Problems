#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define F first
#define S second
#define pi pair<int, int>
#define mi map<int, int>
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define in freopen("in.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)
#define all(x) x.begin(), x.end()
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), [](int a, int b){return a > b;})
#define fill(a,b) memset(a, b, sizeof a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/gcd(a,b)
#define EPS numeric_limits<double>::epsilon()
#define popcount __builtin_popcount

#define inf 1<<30

vector<string> split(const string& s, char c) {
	vector<string> v;
	stringstream ss(s);
	string x;
	while (getline(ss, x, c))
		v.emplace_back(x);
	return move(v);
}
int prime[45];
int sieve()
{
    fill(prime,1);
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<8;i++)
    {
        if(prime[i])
        {
            for(int j=i+i;j<45;j+=i)
            {
                prime[j]=0;
            }
        }
    }
}
int n;
int taken[21];
int arr[21];
int ring(int pos,int typ)
{
    if(pos==n&&prime[arr[0]+arr[n-1]])
    {
        printf("%d",arr[0]);
        for(int i=1;i<n;i++)
        {
            printf(" %d",arr[i]);
        }
        printf("\n");
        return 0;
    }
    int st=3;
    if(typ)
    {
        st=2;
    }
    for(int i=st;i<=n;i+=2)
    {
        int k=arr[pos-1]+i;
        if(prime[k]&&!taken[i])
        {
            taken[i]=1;
            arr[pos]=i;
            ring(pos+1,i&1);
            taken[i]=0;
        }
    }
}
int main()
{
    in,out;
    ios::sync_with_stdio(0);
	cin.tie(0);
    sieve();
    int cas=1;
    while(scanf("%d",&n)==1)
    {
        if(cas!=1)
            printf("\n");
        printf("Case %d:\n",cas++);
        arr[0]=1;
        ring(1,1);
    }
    return 0;
}

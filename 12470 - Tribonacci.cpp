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

vector<string> split(const string& s, char c)
{
    vector<string> v;
    stringstream ss(s);
    string x;
    while (getline(ss, x, c))
        v.emplace_back(x);
    return move(v);
}
ll m = 1000000009;
int multiply(ll F[3][3],ll M[3][3])
{
    ll c[3][3];
    ll sum,i,j,k;
    for (i = 0; i <3; i++)
    {
        for (j = 0; j <3; j++)
        {
            sum = 0;
            for (k = 0; k <3; k++)
            {
                sum = ( (sum%m) + ((F[i][k]%m) *(M[k][j]%m))%m)%m;
            }
            c[i][j] = sum % m;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            F[i][j]=c[i][j];
        }
    }
}

int power(ll F[3][3],ll n)
{
    if(n==0||n==1)
    {
        return 0;
    }
    ll M[3][3]= {{1,1,1},{1,0,0},{0,1,0}};
    power(F,n/2);
    multiply(F,F);
    if(n%2==1)
    {
        multiply(F,M);
    }
}
int main()
{
    ll n,i,j,k;
    while(scanf("%lld",&n)==1,n)
    {
        ll F[3][3]= {{1,1,1},{1,0,0},{0,1,0}};
        power(F,n);
        printf("%lld\n",F[1][1]);
    }
    return 0;
}

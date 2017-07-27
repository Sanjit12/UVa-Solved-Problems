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
vector<int> point[6];
int p[9];
int side[6][6];
int k;
int gen(int ind)
{
    if(k==8)
    {
        for(int i=0; i<=k; i++)
        {
            printf("%d",p[i]);
        }
        printf("\n");
    }
    int u=ind,v;
    for(int i=0; i<(int)point[ind].size(); i++)
    {
        v=point[ind][i];
        if(!side[u][v])
        {
            p[++k]=v;
            side[u][v]=side[v][u]=1;
            gen(v);
            side[u][v]=side[v][u]=0;
            --k;
        }
    }
}
int main()
{
    point[1].pb(2);
    point[1].pb(3);
    point[1].pb(5);
    point[2].pb(1);
    point[2].pb(3);
    point[2].pb(5);
    point[3].pb(1);
    point[3].pb(2);
    point[3].pb(4);
    point[3].pb(5);
    point[4].pb(3);
    point[4].pb(5);
    point[5].pb(1);
    point[5].pb(2);
    point[5].pb(3);
    point[5].pb(4);
    k=0;
    p[k]=1;
    gen(1);
    return 0;
}

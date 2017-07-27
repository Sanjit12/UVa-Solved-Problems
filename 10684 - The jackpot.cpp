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

int main()
{
    //in,out;
    int n,ma,cur_max,d;
    while(scanf("%d",&n),n)
    {
        ma=-1000000;
        cur_max=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&d);
            if(cur_max+d>d)
            {
                cur_max+=d;
            }
            else
            {
                cur_max = d;
            }
            ma = max(ma,cur_max);
        }
        if(ma>0)
        {
            printf("The maximum winning streak is %d.\n",ma);
        }
        else
        {
            printf("Losing streak.\n");
        }
    }
    return 0;
}

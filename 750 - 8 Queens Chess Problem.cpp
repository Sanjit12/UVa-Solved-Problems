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
int qen[9];
int a,b,sol;
int clm[9],diag1[20],diag2[20];
int place(int at)
{
    if(at==8&&qen[b]==a)
    {
        printf("%2d      %d",++sol,qen[0]+1);
        for(int i=1;i<8;i++)
        {
            printf(" %d",qen[i]+1);
        }
        printf("\n");
        return 0;
    }
    for(int i=0;i<8;i++)
    {
        if(clm[i]||diag1[i+at]||diag2[8+i-at])
        {
            continue;
        }
        qen[at]=i;
        clm[i]=diag1[i+at]=diag2[8+i-at]=1;
        place(at+1);
        clm[i]=diag1[i+at]=diag2[8+i-at]=0;
    }
}
int main()
{
    //in,out;
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&a,&b);
        a--;
        b--;
        sol=0;
        fill(qen,0);
        qen[b]=a;
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        place(0);
        if(tc)
        {
            printf("\n");
        }
    }
    return 0;
}

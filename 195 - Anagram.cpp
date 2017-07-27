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

char ch[50];
char per[50];
map<int,int> remain;
map<char,int> val;
int len,len2;
int permute(int pos)
{
    if(pos==len)
    {
        per[pos]='\0';
        printf("%s\n",per);
        return 0;
    }
    for(auto it=remain.begin(); it!=remain.end(); it++)
    {
        if(it->second)
        {
            int k=it->first;
            per[pos]=(k&1)?'a'+k/2:'A'+k/2;
            it->second--;
            permute(pos+1);
            it->second++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<52; i+=2)
    {
        val[('A'+(i/2))]=i;
        val[('a'+(i/2))]=i+1;
    }
    int n;
    scanf("%d",&n);
    while(n--)
    {
        remain.clear();
        scanf("%s",ch);
        len = strlen(ch);
        for(int i=0; ch[i]; i++)
        {
            remain[val[ch[i]]]++;
        }
        permute(0);
    }
    return 0;
}

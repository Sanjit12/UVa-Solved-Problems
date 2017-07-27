#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define F           first
#define S           second
#define pi          pair<int, int>
#define mi          map<int, int>
#define vi          vector<int>
#define vll         vector<ll>
#define pb          push_back
#define eb          emplace_back
#define in          freopen("in.txt", "r", stdin)
#define out         freopen("out.txt", "w", stdout)
#define all(x)      x.begin(), x.end()
#define asort(v)    sort(v.begin(), v.end())
#define dsort(v)    sort(v.begin(), v.end(), [](int a, int b){return a > b;})
#define fill(a,b)   memset(a, b, sizeof a)
#define gcd(a,b)    __gcd(a,b)
#define lcm(a,b)    a*b/gcd(a,b)
#define EPS         numeric_limits<double>::epsilon()
#define popcount    __builtin_popcount
#define rep(i, begin, end) for(__typeof(end) i = (begin) - ((begin) > (end));i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define error(args...) { vector<string> _v = split(#args, ','); err(_v.begin(), args); }
#define IO {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}

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

void err(vector<string>::iterator it) {}

template<typename T, typename... Args>
void err(vector<string>::iterator it, T a, Args... args)
{
    cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << '\n';
    err(++it, args...);
}
int fre[26];
char ch[201];
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        int ma=0;
        gets(ch);
        for(int i=0; ch[i]; i++)
        {
            if(isalpha(ch[i]))
            {
                int k=tolower(ch[i])-'a';
                fre[k]++;
                ma=max(ma,fre[k]);
            }
        }
        rep(i,0,26)
        {
            if(fre[i]==ma)
            {
                cout<<char(i+'a');
            }
            fre[i]=0;
        }
        cout<<"\n";
    }
    return 0;
}

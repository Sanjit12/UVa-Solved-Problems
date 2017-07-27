#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

int main()
{
    int n,cnt,cas=1;
    string ch;
    map<char,int> m;
    set<int> s;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        cnt=0;
        for(int k=0; k<n; k++)
        {
            getline(cin,ch);
            if(ch.length()==1){continue;}
            for(int i=0; ch[i]; i++)
            {
                m[ch[i]]++;
            }
            for(auto p:m)
            {
                s.insert(p.second);
            }
            if(s.size()==m.size())
            {
                cnt++;
            }
            m.clear();
            s.clear();
        }
        cout<< "Case "<<cas<<": "<<cnt<<endl;
        cas++;
    }
    return 0;
}

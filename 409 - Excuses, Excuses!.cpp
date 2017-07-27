#include<bits/stdc++.h>

using namespace std;

queue<string> q;
map<string ,int> has;
map<string ,int> lev;

int main()
{
    int k,e,cas=1;
    string key,exc;
    char t[77];
    while(scanf("%d%d",&k,&e)!=EOF)
    {
        int max=0;
        getchar();
        for(int i=0; i<k; i++)
        {
            cin>>key;
            has[key]=1;
        }
        getchar();
        for(int i=0; i<e; i++)
        {
            getline(cin,exc);
            q.push(exc);
            int ind=0,cnt=0;
            for(int j=0; j<exc.length(); j++)
            {
                if(exc[j]>='A'&&exc[j]<='Z')
                {
                    t[ind++]=exc[j]-'A'+'a';
                }
                else if(exc[j]>='a'&&exc[j]<='z')
                {
                    t[ind++]=exc[j];
                }
                if(!isalpha(exc[j]))
                {
                    t[ind]='\0';
                    if(has[string(t)]==1)
                    {
                        cnt++;
                    }
                    ind=0;
                }
            }
            lev[exc]=cnt;
            max=(cnt>max)?cnt:max;

        }
        cout<<"Excuse Set #"<<cas++<<endl;
        while(!q.empty())
        {
            string s=q.front();
            q.pop();
            if(lev[s]==max)
            {
                cout<<s<<endl;
            }
        }
        cout<<endl;
        lev.clear();
        has.clear();
    }
    return 0;
}

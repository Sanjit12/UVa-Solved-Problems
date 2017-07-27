#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pf push_front

int main()
{
    int n,f=0;
    while(scanf("%d",&n)==1)
    {
        if(f)
            cout<<endl;
        f=1;
        getchar();
        map<string , int > mp;
        vector<string> vec;
        char name[20];

        for(int i=0;i<n;i++)
        {
            scanf("%s",name);
            mp[string(name)]=0;
            vec.pb(string(name));
        }
        int m,np;
        for(int i=0;i<n;i++)
        {
            scanf("%s",name);
            scanf("%d %d",&m,&np);
            if(np==0)
                continue;
            int give=m/np;
            mp[string(name)] -= (give*np);
            for(int j=0;j<np;j++)
            {
                scanf("%s",name);
                mp[string(name)] += give;
            }
        }
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" "<<mp[vec[i]]<<endl;
        }

    }
    return 0;
}

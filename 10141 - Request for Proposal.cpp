#include<bits/stdc++.h>
using namespace std;

struct pro
{
    string name;
    double d;
    int r;
    bool operator<(pro const&p)const
    {
        if(r>p.r)
            return true;
        if(r<p.r)
            return false;
        if(d<p.d)
            return true;
        if(d>p.d)
            return false;
        return false;
    }
};

int main()
{

    int n,p,r,cas=1;
    double d;
    string ch;
    while(scanf("%d%d",&n,&p)&&(n||p))
    {
        pro proposal[1005];
        if(cas!=1)
            printf("\n");
        for(int i=0; i<n; i++)
        {
            cin.ignore();
            getline(cin,ch);
        }
        for(int i=0; i<p; i++)
        {
            getline(cin,ch);
            proposal[i].name=ch;
            scanf("%lf %d\n",&d,&r);
            for(int j=0; j<r; j++)
            {
                getline(cin,ch);
            }
            proposal[i].d=d;
            proposal[i].r=r;
        }
        sort(proposal,proposal+p);
        cout<<"RFP #"<<cas++<<'\n';
        cout<<proposal[0].name<<endl;
    }

    return 0;
}

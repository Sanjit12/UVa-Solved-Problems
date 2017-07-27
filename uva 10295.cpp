#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
map<string,int> mp;
int main()
{
    int n,m,i,k,val;
    char ch[17];
    while(scanf("%d%d\n",&n,&m)==2)
    {
        val=0;
        for(i=0; i<n; i++)
        {
            scanf("%s %d\n",ch,&k);
            mp[ch]=k;
        }
        for(i=0; i<m;)
        {
            scanf("%s",ch);
            if(ch[0]=='.')
            {
                printf("%d\n",val);
                val=0;
                i++;
            }
            val+=mp[ch];
        }
    }
    return 0;
}

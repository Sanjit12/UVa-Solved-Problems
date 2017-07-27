#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    map<char,char> mp;
    mp['0']='O';
    mp['1']='I';
    mp['2']='Z';
    mp['3']='E';
    mp['4']='A';
    mp['5']='S';
    mp['6']='G';
    mp['7']='T';
    mp['8']='B';
    mp['9']='P';
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        while(getline(cin,s))
        {
            if(s.size()==0)
            {
                break;
            }
            for(int i=0;s[i];i++)
            {
                if(s[i]>='0'&&s[i]<='9')
                {
                    printf("%c",mp[s[i]]);
                }
                else
                {
                    printf("%c",s[i]);
                }
            }
            printf("\n");
        }
        if(t)
            printf("\n");
    }
    return 0;
}

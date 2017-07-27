#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while(getline(cin,s))
    {
        string a="";
        for(int i=0;s[i];i++)
        {
            if(s[i]=='o')
            {
                a+="1";
            }
            else if(s[i]==' ')
            {
                a+="0";
            }
        }
        int si=a.size()-1,num=0;
        for(int i=0;i<=si;i++)
        {
            if(a[i]=='1')
            {
                num+=powl(2,si-i);
            }
        }
        if(num)
        cout<<char(num);
    }
    return 0;
}

#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
    map<char,int> m;
    char ch;
    int max=0;
    while((ch=getchar())!=EOF)
    {

        if(ch=='\n')
        {
            for(auto i=m.begin();i!=m.end();++i)
            {
                if(i->second>max)
                    max=i->second;
            }
            for(auto i=m.begin();i!=m.end();++i)
            {
                if(i->second==max)
                    cout<<i->first;
            }
            cout<<" "<<max<<endl;
            max=0;
            m.clear();
        }
        if((ch>=65&&ch<=91)||(ch>=97&&ch<=123))
        m[ch]++;
    }
    return 0;
}

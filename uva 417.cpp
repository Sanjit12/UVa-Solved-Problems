#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
map<string,int> m;
int set()
{
    string ch;
    int val=1,i,j,k,l,n;
    for( i=0; i<26; i++)
    {
        ch=i+'a';
        m[ch]=val;
        val++;
    }
    string a,b,c,d,h;
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            a='a'+i;
            b='a'+j;
            ch=a+b;
            m[ch]=val;
            val++;
        }
    }
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            for(k=j+1; k<26; k++)
            {
                a='a'+i;
                b='a'+j;
                c='a'+k;
                ch=a+b+c;
                m[ch]=val;
                val++;
            }
        }
    }
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            for(k=j+1; k<26; k++)
            {
                for(l=k+1; l<26; l++)
                {
                    a='a'+i;
                    b='a'+j;
                    c='a'+k;
                    d='a'+l;
                    ch=a+b+c+d;
                    m[ch]=val;
                    val++;
                }
            }
        }
    }
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            for(k=j+1; k<26; k++)
            {
                for(l=k+1; l<26; l++)
                {
                    for(n=l+1; n<26; n++)
                    {
                        a='a'+i;
                        b='a'+j;
                        c='a'+k;
                        d='a'+l;
                        h='a'+n;
                        ch=a+b+c+d+h;
                        m[ch]=val;
                        val++;
                    }
                }
            }
        }
    }
}
int main()
{
    set();
    string a;
    while(cin>>a)
    {
        cout<<m[a]<<endl;
    }
    return 0;
}

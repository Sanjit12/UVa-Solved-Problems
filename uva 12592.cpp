#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

int main()
{
    string a,b;
    int n,m;
    map<string,string> slogan;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,a);
        getline(cin,b);
        slogan[a]=b;
    }
    scanf("%d",&m);
    getchar();
    while(m--)
    {
        getline(cin,a);
        cout<<slogan[a]<<endl;
    }
    return 0;
}

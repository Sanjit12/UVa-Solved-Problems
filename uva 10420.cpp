#include<iostream>
#include<string>
#include<cstdio>
#include<map>

using namespace std;

int main()
{
    map<string,int> w;
    string a,b;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        cin>>a;
        getline(cin,b);
        w[a]++;
    }
    for(auto c:w)
    {
        cout<<c.first<<" "<<c.second<<endl;
    }
    return 0;
}

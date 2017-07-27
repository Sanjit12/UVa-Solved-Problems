#include<bits/stdc++.h>
using namespace std;
char num[1001];
int divides_by(int n)
{
    int ans=0;
    for(int i=0;num[i];i++)
    {
        ans=(ans*10 + (num[i]-'0'))%n;
    }
    if(ans)
        return 0;
    return 1;
}
int main()
{
    int n,s,d[15];
    scanf("%d",&n);
    while(n--)
    {
        int f=1;
        scanf("%s",num);
        scanf("%d",&s);
        for(int i=0;i<s;i++)
        {
            scanf("%d",&d[i]);
        }
        for(int i=0;i<s;i++)
        {
            if(!divides_by(d[i]))
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            printf("%s - Wonderful.\n",num);
        }
        else
        {
            printf("%s - Simple.\n",num);
        }
    }
    return 0;
}

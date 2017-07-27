#include<bits/stdc++.h>
using namespace std;

char ch[1000006];

int main()
{

    int n,i,j,cas=1;

    while(scanf("%s",ch)!=EOF)
    {
        scanf("%d",&n);
        printf("Case %d:\n",cas++);
        while(n--)
        {
            scanf("%d%d",&i,&j);
            if(j<i)
            {
                swap(i,j);
            }
            for(;i<=j;i++)
            {
                if(ch[i]!=ch[j])
                    break;
            }
            if(i>j)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}

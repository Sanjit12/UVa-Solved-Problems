#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[1001],m,q,cas=1;

    while(scanf("%d",&n),n)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Case %d:\n",cas++);
        scanf("%d",&m);
        while(m--)
        {
            int d=1<<30,ans;
            scanf("%d",&q);
            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    int sum=arr[i]+arr[j];
                    if(abs(q-sum)<d)
                    {
                        d=abs(q-sum);
                        ans=sum;
                    }
                }
            }
            printf("Closest sum to %d is %d.\n",q,ans);
        }
    }

    return 0;
}

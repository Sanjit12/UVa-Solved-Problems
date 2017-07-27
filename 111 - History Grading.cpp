#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n)
{
    int lis[n];

    for(int i=1;i<=n;i++)
    {
        lis[i]=1;
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(arr[j]<arr[i]&& lis[i]<lis[j]+1)
            {
                lis[i] = lis[j]+1;
            }
        }
    }

    int max=-1;

    for(int i=1;i<=n;i++)
    {
        max = (lis[i]>max?lis[i]:max);
    }
    return max;
}
int main()
{
    int n,arr[21],seq[21];

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }

    while(scanf("%d",&seq[arr[1]])==1)
    {
        for(int i=2;i<=n;i++)
        {
            scanf("%d",&seq[arr[i]]);
        }
        printf("%d\n",lis(seq,n));
    }
    return 0;
}

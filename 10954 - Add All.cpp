#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> q;
    int n,a,b;

    while(scanf("%d",&n),n)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            q.push(-a);
        }
        int cost=0,sum;
        while(q.size()>1)
        {
            a=q.top();
            q.pop();
            b=q.top();
            q.pop();
            cost+=(a+b);
            sum=a+b;
            q.push(sum);
        }
        printf("%d\n",-cost);
        q.pop();
    }
    return 0;
}

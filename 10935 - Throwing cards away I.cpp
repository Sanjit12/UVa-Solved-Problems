#include<bits/stdc++.h>

using namespace std;
queue<int> q;

int main()
{
    int n;
    while(scanf("%d",&n)&&n)
    {
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        printf("Discarded cards:");
        while(q.size()>1)
        {
            printf(" %d",q.front());
            q.pop();
            q.push(q.front());
            q.pop();
            if(q.size()>1)
            {
                printf(",");
            }
        }
        printf("\nRemaining card: %d\n",q.front());
        q.pop();
    }
    return 0;
}

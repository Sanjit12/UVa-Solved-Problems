#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,a,b;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&p);
        int df,f=1,t=1;
        for(int i=0;i<p;i++)
        {
            scanf("%d%d",&a,&b);
            if(f)
            {
                f=0;
                df=abs(a-b);
            }
            else if(abs(a-b)!=df)
            {
                t=0;
            }
        }
        if(t)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
        if(n)
        {
            printf("\n");
        }
    }
    return 0;
}

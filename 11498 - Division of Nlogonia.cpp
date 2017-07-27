#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d;

    while(scanf("%d",&n),n)
    {
        scanf("%d%d",&a,&b);
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&c,&d);
            if(a==c||a==d||b==c||b==d)
            {
                printf("divisa\n");
            }
            else if(c<a&&d>b)
            {
                printf("NO\n");
            }
            else if(c<a&&d<b)
            {
                printf("SO\n");
            }
            else if(c>a&&d>b)
            {
                printf("NE\n");
            }
            else
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        int m=0,cnt=0;
        do
        {
            m = (10*m +1)%n;
            cnt++;
        }
        while(m!=0);
        printf("%d\n",cnt);
    }

    return 0;
}

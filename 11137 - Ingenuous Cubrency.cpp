#include<bits/stdc++.h>
using namespace std;
long long cal[10001];
int main()
{
    int ar[22];
    for(int i=1; i<22; i++)
    {
        ar[i-1]=powl(i,3);
    }
    cal[0]=1;
    for(int i=0; i<21; i++)
    {
        for(int j=ar[i]; j<10001; j++)
        {
            cal[j] += cal[j - ar[i]];
        }
    }
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%lld\n",cal[n]);
    }
    return 0;
}

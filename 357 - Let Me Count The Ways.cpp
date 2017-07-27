#include<bits/stdc++.h>
using namespace std;

#define max 30005
long long cal[max];

int main()
{
    int ar[]={1,5,10,25,50},n;
    cal[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=ar[i];j<=max;j++)
        {
            cal[j] += cal[j-ar[i]];
        }
    }

    while(scanf("%d",&n)==1)
    {
        if(cal[n]==1)
        {
            printf("There is only 1 way to produce %d cents change.\n",n);
        }
        else
        {
            printf("There are %lld ways to produce %d cents change.\n",cal[n],n);
        }
    }

    return 0;
}

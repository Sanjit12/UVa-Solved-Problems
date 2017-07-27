#include<bits/stdc++.h>
using namespace std;
long long cal[30001];
int main()
{
    int ar[]={5,10,20,50,100,200,500,1000,2000,5000,10000};

    cal[0]=1;

    for(int i=0;i<11;i++)
    {
        for(int j=ar[i];j<30001;j++)
        {
            cal[j] += cal[j - ar[i]];
        }
    }
    int n,k;
    while(scanf("%d.%d",&n,&k)==2)
    {
        if(n==0&&k==0)
            break;

        int n1=n*100+k;

        printf("%3d.%.2d%17lld\n",n,k,cal[n1]);
    }

    return 0;
}

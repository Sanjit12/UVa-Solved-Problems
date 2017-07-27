#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;
int val[30001];
int main()
{
    int t,n,k,a,max;
    long dif;
    scanf("%d",&t);
    while(t--)
    {
        dif=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&val[i]);
        }
        sort(val,val+n);
        max=val[n/2];
        for(int i=0;i<n;i++)
        {
            dif+=abs(max-val[i]);
        }
        printf("%ld\n",dif);
    }

    return 0;
}

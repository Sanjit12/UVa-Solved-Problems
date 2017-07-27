#include<bits/stdc++.h>
using namespace std;

bool up(int a,int b)
{
    return a<b;
}
bool down(int a,int b)
{
    return a>b;
}
int main()
{
    int n,arr[10];
    printf("Lumberjacks:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d",&arr[j]);
        }
        if(is_sorted(arr,arr+10,up)||is_sorted(arr,arr+10,down))
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }

    return 0;
}

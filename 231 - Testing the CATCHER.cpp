#include<bits/stdc++.h>
using namespace std;
int lis(vector<int> vec)
{
    int lis[vec.size()];

    for(int i=0; i<vec.size(); i++)
    {
        lis[i]=1;
    }

    for(int i=1; i<vec.size(); i++)
    {
        for(int j=0; j<i; j++)
        {
            if(vec[j] >= vec[i] && lis[i] < lis[j]+1)
            {
                lis[i] = lis[j]+1;
            }
        }
    }
    int max=-1;
    for(int i=0; i<vec.size(); i++)
    {
        max =(lis[i]>max?lis[i]:max);
    }
    return max;
}
int main()
{
    int n,cas=1;
    vector<int> vec;
    while(scanf("%d",&n)==1)
    {
        if(n==-1)
        {
            break;
        }
        else
        {
            if(cas!=1)
                printf("\n");
            printf("Test #%d:\n  maximum possible interceptions: ",cas++);
            vec.push_back(n);
            while(scanf("%d",&n)&&n!=-1)
            {
                vec.push_back(n);
            }
            int q = lis(vec);

            printf("%d\n",q);
        }
        vec.clear();
    }

    return 0;
}

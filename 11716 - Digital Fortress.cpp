#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char ch[10004];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(ch);
        int len = strlen(ch);
        int q=sqrt(len);
        if(q*q<len)
        {
            printf("INVALID\n");
            continue;
        }
        for(int i=0;i<q;i++)
        {
            for(int j=i;j<len;j+=q)
            {
                printf("%c",ch[j]);
            }
        }
        printf("\n");
    }

    return 0;
}

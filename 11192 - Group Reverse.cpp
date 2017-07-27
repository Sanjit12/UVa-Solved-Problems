#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int n;
    char ch,p[12],st[101];
    while(scanf("%d",&n)&&n)
    {
        getchar();
        scanf("%s",st);
        int len=strlen(st);
        int t=len/n;
        int i=0,j=0;
        while(st[j])
        {
            p[i++]=st[j++];
            if(i==t)
            {
                p[i]='\0';
                reverse(p,p+i);
                i=0;
                printf("%s",p);
            }
        }
        printf("\n");
    }
    return 0;
}


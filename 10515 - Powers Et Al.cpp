#include<bits/stdc++.h>
using namespace std;

int rem(char n[])
{
    int d=0;

    for(int i=0;n[i];i++)
    {
        d = d*10+(n[i]-'0');
        d%=4;
    }
    return d;
}

int main()
{
    char m[105],n[105];

    while(scanf("%s%s",m,n)==2)
    {
        if(!strcmp(m,"0")&&!strcmp(n,"0")) break;

        int l1=strlen(m);
        int l2=strlen(n);
        int d=m[l1-1]-'0';
        int p=rem(n);
        if(p==0)
            p=4;
        d = pow(d,p);

        printf("%d\n",d%10);
    }
    return 0;
}

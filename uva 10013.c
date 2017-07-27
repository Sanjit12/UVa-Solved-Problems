#include<stdio.h>
#include<string.h>
int main()
{
    char n1[1000001],n2[1000001],sum[1000001];
    long n,m,a,b,i,j;
    int c,s,f=0;
    scanf("%ld",&n);
    while(n--)
    {
        if(f)
        printf("\n");
        f=1;
        scanf("%ld",&m);
        getchar();
        for(i=0;i<m;i++)
        {
            scanf("%c %c",&n1[i],&n2[i]);
            getchar();
        }
        n1[i]='\0';
        n2[i]='\0';
        c=0;
        for(i=m-1;i>=0;i--)
        {
            s=(n1[i]-'0')+(n2[i]-'0')+c;
            if(s>9)
            {
                s%=10;
                c=1;
            }
            else
                   c=0;
            sum[i]=(s+'0');
        }
        sum[m]='\0';
        printf("%s\n",sum);
    }
    return 0;
}
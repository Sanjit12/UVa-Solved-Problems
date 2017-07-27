#include<stdio.h>
#include<string.h>

#define max(x,y) ((x)>(y)?(x):(y))

int lcs(char *x,char *y,int m,int n)
{
    int L[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                L[i][j]=0;
            }
            else if(x[i-1]==y[j-1])
            {
                L[i][j]=L[i-1][j-1] + 1;
            }
            else
            {
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    return L[m][n];
}
int main()
{
    int i,j,cnt,m,n;
    char a[1001],b[1001];
    while(gets(a)!=NULL &&gets(b) != NULL)
    {
        m=strlen(a);
        n=strlen(b);
        printf("%d\n",lcs(a,b,m,n));
    }

    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,sum,row,clm,inr,inc;
    char mat[101][101];
    while(scanf("%d",&n)==1&&n)
    {
        row=clm=-1;
        inr=inc=0;
        for(int i=0; i<n; i++)
        {
            sum=0;
            for(int j=0; j<n; j++)
            {
                scanf("%d",&mat[i][j]);
                sum+=mat[i][j];
            }
            if(sum%2==1)
            {
                row = i;
                inr++;
            }
        }
        for(int j=0; j<n; j++)
        {
            sum=0;
            for(int i=0; i<n; i++)
            {
                sum+=mat[i][j];
            }
            if(sum%2==1)
            {
                clm=j;
                inc++;
            }
        }
        if(row==-1&&clm==-1)
        {
            printf("OK\n");
        }
        else if(row==-1||clm==-1||inr>1||inc>1)
        {
            printf("Corrupt\n");
        }
        else
        {
            printf("Change bit (%d,%d)\n",row+1,clm+1);
        }
    }

    return 0;
}

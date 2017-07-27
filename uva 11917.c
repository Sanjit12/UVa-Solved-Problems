#include<stdio.h>
#include<string.h>
int main()
{
    char sub[100][21],ass[21];
    int da[100],i=1,day,j,n,f=0,k,p;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d",&j);
        for(k=0;k<j;k++)
        {
          scanf("%s%d",sub[k],&da[k]);
        }
        scanf("%d%s",&day,ass);
        for(p=0;p<j;p++)
        {
            if(!strcmp(sub[p],ass))
            {
                if(da[p]<=day)
                {
                    f=1;
                }
                else if(da[p]<=day+5)
                {
                    f=2;
                }
                break;
            }
        }
        if(f==1)
        printf("Case %d: Yesss\n",i);
        else if(f==2)
        printf("Case %d: Late\n",i);
        else
        printf("Case %d: Do your own homework!\n",i);
        f=0;
        i++;
    }
    return 0;
}
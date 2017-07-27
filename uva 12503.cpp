#include<stdio.h>
#include<string.h>

int main()
{
    char m[105],chk[10];
    int n,i,k,p,a;
    scanf("%d",&n);
    while(n--)
    {
        p=0;
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            scanf("%s",chk);
            if(!strcmp(chk,"LEFT"))
            {
                p--;
                m[i]=-1;
            }
            else if(!strcmp(chk,"RIGHT"))
            {
                p++;
                m[i]=1;
            }
            else
            {
                scanf(" AS %d",&k);
                p+=(m[k]);
                m[i]=m[k];
            }
        }
        printf("%d\n",p);
    }
    return 0;
}

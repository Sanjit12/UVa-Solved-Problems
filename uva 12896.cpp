#include<stdio.h>

int main()
{
    int t,l,n[100],p[100],i;
    char input[10][4]={{' '},{'.',',','?','\"'} ,
                        {'a','b','c'},{'d','e','f'},
                        {'g','h','i'},{'j','k','l'},
                        {'m','n','o'},{'p','q','r','s'},
                        {'t','u','v'},{'w','x','y','z'}};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        for(i=0;i<l;i++)
        {
            scanf("%d",&n[i]);
        }
        for(i=0;i<l;i++)
        {
            scanf("%d",&p[i]);
        }
        for(i=0;i<l;i++)
        {
            printf("%c",input[n[i]][p[i]-1]);
        }
        printf("\n");
    }

    return 0;
}

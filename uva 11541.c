#include<stdio.h>
#include<string.h>
int ch(char a)
{
    if(a>='A'&&a<='Z'||a=='\0')
        return 1;
    return 0;
}
int main()
{
    int i,j,k,n,v,l=1;
    char en[200],c;
    scanf("%d",&n);
    while(l<=n)
    {
        scanf("%s",en);
        printf("Case %d: ",l);
        k=strlen(en);
        for(i=0;i<k;i++)
        {
            c=en[i++];
            v=0;
            while(!ch(en[i]))
            {
                v=v*10+(en[i]-'0');
                i++;
            }
            i--;
            for(j=0;j<v;j++)
            {
                printf("%c",c);
            }
        }
        printf("\n");
        l++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,i,l;
    long d,p=0,f=0;
    while(scanf("%d%d%d%ld%d",&a,&b,&c,&d,&l)==5)
    {
        if(!a&&!b&&!c&&!d&&!l)break;
        
        for(i=0;i<=l;i++)
        {
            f=a*(i*i)+b*i+c;
            if(f%d==0)
            p++;
        }
        printf("%d\n",p);
        p=0;
    }
    return 0;
}
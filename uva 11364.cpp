#include<stdio.h>

int main()
{
    int i,j,n,p,min,max;
    scanf("%d",&n);
    while(n--)
    {
        min=100;
        max=0;
        scanf("%d",&i);
        for(j=0;j<i;j++)
        {
            scanf("%d",&p);
            if(p<min)
                min=p;
            if(p>max)
                max=p;
        }
        printf("%d\n",(max-min)<<1);
    }
    return 0;
}

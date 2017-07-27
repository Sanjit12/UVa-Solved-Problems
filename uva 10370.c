#include<stdio.h>
int main()
{
    int a,b[1000],c=0,n,i,count=0;
    float av,f=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            scanf("%d",&b[i]);
            c+=b[i];
        }
        av=(float)c/a;
        for(i=0;i<a;i++)
        {
            if(b[i]>av)
                count++;
        }
        f=((float)count/a)*100;
        printf("%.3f%%\n",f);
        count=0;
        c=0;
    }
    return 0;
}

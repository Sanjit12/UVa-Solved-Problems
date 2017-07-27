#include<stdio.h>

int main()
{
    int a,b,d1,d2;
    while(scanf("%d%d",&a,&b)==2&&a>-1&&b>-1)
    {
       if(a<b)
       {
           d1=100+a-b;
           d2=b-a;
       }
       else
       {
           d1=100+b-a;
           d2=a-b;
       }
        if(d1<d2)
        {
            printf("%d\n",d1);
        }
        else
        {
            printf("%d\n",d2);
        }
    }

    return 0;
}

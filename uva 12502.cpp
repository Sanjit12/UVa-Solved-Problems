#include<stdio.h>
int main()
{
    int a,b,c,A,B,n,t,s;
    float h;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        t=(a+b)*60;
        s=t/3;
        A=a*60-s;
        if(A<=0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",(A*c)/s);
        }
    }

    return 0;
}

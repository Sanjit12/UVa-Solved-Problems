#include<stdio.h>
int main()
{
    long long a,b,c;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c&&b+c>a&&a+c>b)
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}

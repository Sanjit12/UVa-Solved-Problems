#include<stdio.h>

int main()
{
    int i,n,cnt=0;
    double le,wi,hi,we,t;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf %lf %lf %lf",&le,&wi,&hi,&we);

        t=le+wi+hi;

        if(((le <= 56.00 && wi <= 45.00 && hi <= 25.00)||(t<=125.00))&& we <= 7.00)
        {
            printf("1\n");
            cnt++;
        }
        else
            printf("0\n");

    }
    printf("%d\n",cnt);

    return 0;
}

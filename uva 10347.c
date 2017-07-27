#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,A;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=0.5*(a+b+c);
        A=(4.0/3.0)*sqrt(s*(s-a)*(s-b)*(s-c));
        if(A>0)
        printf("%.3lf\n",A);
        else
        {
            printf("-1.000\n");
        }
    }
    return 0;
}

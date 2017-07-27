#include<stdio.h>
#include<math.h>

#define pi (2*acos(0.0))

int main()
{
    double  a,b,c;
    double  p,ocir,R,s,A,icir;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        p=a+b+c;
        s=0.5*p;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        ocir=(a*b*c)/(4.0*A);
        ocir=pi*(ocir*ocir)-A;
        icir=A/s;
        icir=pi*(icir*icir);
        A-=icir;
        printf("%.4lf %.4lf %.4lf\n",ocir,A,icir);
    }

    return 0;
}

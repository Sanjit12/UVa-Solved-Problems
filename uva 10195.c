#include<stdio.h>
#include<math.h>

#define pi (2*acos(0.0))

int main()
{
    double  a,b,c;
    double  p,cir,R,s,A;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        p=a+b+c;
        s=0.5*p;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        cir=A/s;
        if(a==0.0&&b==0.0&&c==0.0)
            printf("The radius of the round table is: 0.000\n",cir);
        else
            printf("The radius of the round table is: %.3lf\n",cir);
    }

    return 0;
}




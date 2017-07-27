#include<stdio.h>
#include<math.h>

#define pi 3.141592653589793

int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c;
    double  p,cir,R,s,A;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
        c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        p=a+b+c;
        s=0.5*p;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4.0*A);
        cir=2.0*pi*R;
        printf("%.2lf\n",cir);
    }

    return 0;
}


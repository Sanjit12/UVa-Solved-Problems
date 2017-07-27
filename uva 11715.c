#include<stdio.h>
#include<math.h>
int main()
{
    long c,i=1;
    double u, v, a, s, t;
    while (scanf("%ld", &c) == 1)
    {
        if(c==0)break;
        switch (c)
        {
        case 1:
        {
            scanf("%lf%lf%lf", &u, &v, &t);
            s=((u+v)/2)*t;
            a=(v-u)/t;
            printf("Case %ld: %.3lf %.3lf\n",i,s,a);
        }
        break;
        case 2:
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            s=(v*v - u*u )/(2*a);
            t=(v-u)/a;
            printf("Case %ld: %.3lf %.3lf\n",i,s,t);
        }
        break;
        case 3:
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %ld: %.3lf %.3lf\n",i,v,t);
        }
        break;
        case 4:
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %ld: %.3lf %.3lf\n",i,u,t);
        }
        break;
        }
        i++;
    }
    return 0;
}

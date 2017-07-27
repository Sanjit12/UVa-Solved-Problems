#include<stdio.h>

int main()
{
    double H,U,D,F,n,j,dis,f;
    int i;
    while(scanf("%lf%lf%lf%lf",&H,&U,&D,&F)==4&&H)
    {
        dis=0;
        f=(F*U)/100.0;
        for(i=1;;i++)
        {
            if(U>0)
            dis+=U;
            if(dis>H)
                break;
            dis-=D;
            if(dis<0)
                break;
            U-=f;
        }
        if(dis>H)
        {
            printf("success on day %d\n",i);
        }
        else
        {
            printf("failure on day %d\n",i);
        }
    }
    return 0;
}

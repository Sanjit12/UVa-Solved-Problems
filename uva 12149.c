#include<stdio.h>

#define sq(x) ((x)*(x))
long f[101],s;
int feymen()
{
    int i;
    f[0]=0;
    for(i=1;i<101;i++)
    {
        s=sq(i);
        f[i]=f[i-1]+s;
    }
}
int main()
{
    feymen();
    long a;
    while(scanf("%ld",&a)==1)
    {
        if(a==0)
        break;
        printf("%ld\n",f[a]);
    }
    return 0;
}
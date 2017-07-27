#include<stdio.h>
int main()
{
    float c,d,f;
    int i=0,n;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%f%f",&c,&d);
        f=(9./5.)*c+32;
        f+=d;
        c=(5./9.)*(f-32);
        printf("Case %d: %.2f\n",++i,c);
    }
    return 0;
}
    
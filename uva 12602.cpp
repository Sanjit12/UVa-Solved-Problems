#include<stdio.h>

int main()
{
    long n,i,j,v,p1,p2,p3,dif;
    char a,b,c;
    scanf("%ld",&n);
    getchar();
    while(n--)
    {
        scanf("%c%c%c-%ld",&a,&b,&c,&v);
        p1=(a-'A')*26*26;
        p2=p1+(b-'A')*26;
        p3=p2+c-'A';
        dif= p3 - v;
        if(dif<0)
        {
            dif*=-1;
        }
        if(dif<=100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
        getchar();
    }

    return 0;
}

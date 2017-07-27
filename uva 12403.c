#include<stdio.h>
#include<string.h>
int main()
{
    char p[10];
    long k=0,n,a;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%s",p);
        if(!strcmp(p,"donate"))
        {
            scanf("%ld",&a);
            k+=a;
        }
        if(!strcmp(p,"report"))
        {
            printf("%ld\n",k);
        }
    }
    return 0;
}
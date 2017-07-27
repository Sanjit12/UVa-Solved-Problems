#include<stdio.h>
#include<string.h>
long long fact(int n)
{
    if(n==2)
    return 2;
    return n*fact(n-1);
}
int main()
{
    char p[21],d[27];
    int i,len;
    long a=1,n,j;
   unsigned long long int f;
    scanf("%ld",&n);
    while(a<=n)
    {
        memset(d,0,sizeof(d));
        scanf("%s",p);
        len=strlen(p);
        for(i=0;p[i];i++)
        {
            j=p[i]-'A';
            d[j]++;
        }
        f=fact(len);
        for(i=0;i<26;i++)
        {
            if(d[i]>1)
            {
                f/=fact(d[i]);
            }
        }
        printf("Data set %ld: %llu\n",a,f);
        a++;
    }
    return 0;
}
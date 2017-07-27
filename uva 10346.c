#include<stdio.h>
int main()
{
    long a,b,c,n;
    while(scanf("%ld%ld",&a,&b)==2)
    {
          n=a;
          for(;a>=b;)
          {
              c=a/b;
              n+=c;
              c=(a%b);
              a/=b;
              a+=c;
           }
           printf("%ld\n",n);
       }
       return 0;
}    
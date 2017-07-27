#include<stdio.h>
int main()
{
   long long a,t,i;
   long rem, n,count[10];
   scanf("%ld",&n);
   while(n--)
   {
        for(i=0;i<10;i++)
             count[i]=0;
             
        scanf("%lld",&a);
        for(i=1;i<=a;i++)
        {
              t=i;
              while(t>=1)
              {
                 rem=t%10;
                 count[rem]++;
                 t/=10;
               }
         }
         for(i=0;i<10;i++)
         {
               printf("%ld",count[i]);
               if(i==9)break;
               printf(" ");
         }   
         printf("\n");
   }
   return 0;
}
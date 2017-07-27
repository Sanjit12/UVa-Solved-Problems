#include<stdio.h>
int main()
{
     int h,m,c,n,b;
     scanf("%d",&n);
     while(n--)
     {
         scanf("%d:%d",&h,&m);
         if(m==0)
         {
             m=60;
         }
         else if(h<12)
         {
             h++;
         }
         else
         h=1;
         h=12-h;
         m=60-m;
         if(h==0)
         {
             h=12;
         }
         if(h<10)
         printf("0");
         printf("%d:",h);
         if(m<10)
         printf("0");
         printf("%d\n",m);
     }
     return 0;
}
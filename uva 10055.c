#include<stdio.h>
int main()
{
       unsigned long a,b;
       while(2==scanf("%lu%lu",&a,&b))
       {
              if(a>b)
              printf("%lu\n",a-b);
              else
              printf("%lu\n",b-a);
       }
       return 0;

}

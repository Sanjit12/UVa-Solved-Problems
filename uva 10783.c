#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,s;
    int i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d%d",&a,&b);
        if(a%2==1)
        {
            s=sum(a,b);
            printf("Case %d: %d\n",i,s);
        }
        else
        {
            s=sum(a+1,b);
            printf("Case %d: %d\n",i,s);
        }
        i++;
    }
    return 0;
}
int sum(int a,int b)
{
      int sum=0;
      for(a;a<=b;a=a+2)
      {
          sum+=a;
      }
      return sum;
}

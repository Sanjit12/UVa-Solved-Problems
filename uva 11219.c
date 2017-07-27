#include<stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2,i=0,n,d,m,y;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        if(d1<d2)
        {
            d1+=30;
            m2++;
        }
        if(m1<m2)
        {
            m1+=12;
            y2++;
        }
        d=d1-d2;
        m=m1-m2;
        y=y1-y2;
        if(y>130)
        {
            printf("Case #%d: Check birth date\n",i+1);
        }
        else if(y<0)
        {
            printf("Case #%d: Invalid birth date\n",i+1);
        }
        else
        printf("Case #%d: %d\n",i+1,y);
        i++;
        d=m=y=0;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int ch,cm,ah,am,h,m;
    for(;;)
    {
        scanf("%d%d%d%d",&ch,&cm,&ah,&am);
        if(ch==0&&cm==0&&ah==0&&am==0)break;
        if(am<cm)
        {
            am+=60;
            ch++;
        }
        if(ah<ch)
            ah+=24;
        m=am-cm;
        h=ah-ch;
        h=h*60;
        h+=m;
        printf("%d\n",h);
    }
    return 0;
}

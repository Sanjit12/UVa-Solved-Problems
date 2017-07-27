#include<stdio.h>

int main()
{
    char num[105];
    int d,i,f,k;
    while(scanf("%d %s",&d,num)==2)
    {
        if(d==0&&num[0]=='0')
            break;
        f=1;
        k=0;
        for(i=0; num[i]; i++)
        {
            if((num[i]==(d+48))||(num[i]=='0'&&f==1))
            {
                continue;
            }
            else
            {
                f=0;
                printf("%c",num[i]);
                k=1;
            }

        }
        if(k==0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}

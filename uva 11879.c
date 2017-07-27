#include<stdio.h>
#include<string.h>
int main()
{
    char num[101];
    int a,i;
    while(scanf("%s",num)==1)
    {
        if(!strcmp(num,"0"))
        {
            break;
        }
        a=0;
        for(i=0;num[i];i++)
        {
            a=(a*10+(num[i]-'0'))%17;
        }
        if(!a)
        {
            printf("1\n");
        }
        else
        printf("0\n");
    }
    return 0;
}
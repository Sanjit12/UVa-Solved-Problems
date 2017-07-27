#include<stdio.h>
#include<string.h>
int main()
{
    char p[100000],w[100000];
    long j,i=0,a=0;
    for(;gets(p);a=0)
    {
        if(!strcmp(p,"DONE"))
        break;
        for(i=0;p[i];i++)
        {
            if(p[i]>='a'&&p[i]<='z')
            {
                w[a++]=p[i]-'a'+'A';
            }
            else if(p[i]>='A'&&p[i]<='Z')
            {
                w[a++]=p[i];
            }
        }
        for(j=0,a--;j<a;j++,a--)
        {
            if(w[j]!=w[a])
            {
                 printf("Uh oh..\n");
                 break;
            }
        }
        if(a<=j)
        {
            printf("You won't be eaten!\n");
        }
    }
    return 0;
}
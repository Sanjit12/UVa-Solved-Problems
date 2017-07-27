#include<stdio.h>
int main()
{
    char song[16][9]={"Happy","birthday","to","you","Happy","birthday","to","you",
                       "Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char name[100][101];
    int n,i,t,p;
    scanf("%d",&n);
    t=n;
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    if(n<=16)
        t=16;
    else
    {
        p=n;
        t=p/16;
        p=16*(t+1);
        t=p;
    }
    for(i=0;i<t;i++)
    {
        printf("%s: %s\n",name[i%n],song[i%16]);
    }
    return 0;
}

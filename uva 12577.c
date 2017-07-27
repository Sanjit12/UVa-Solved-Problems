#include<stdio.h>
int main()
{
    int i=1;
    char m[6];
    scanf("%s",m);
    for(;m[0]!='*';)
    {
        if(m[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",i++);
        else if(m[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",i++);
        scanf("%s",m);
    }
    return 0;
}

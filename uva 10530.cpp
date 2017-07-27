#include<stdio.h>
#include<string.h>

int main()
{
    char clue[10];
    int i,j,k,n,num=0,nu=11;
    while(scanf("%d",&n)==1&&n)
    {
        getchar();
        gets(clue);
        if(!strcmp(clue,"too low"))
        {
            if(n>num)
                num=n;
        }
        else if(!strcmp(clue,"too high"))
        {
            if(n<nu)
                nu=n;
        }
        else
        {
            if(n>num&&n<nu)
            {
                printf("Stan may be honest\n");
            }
            else
            {
                printf("Stan is dishonest\n");
            }
            num=0;
            nu=11;
        }
    }
    return 0;
}

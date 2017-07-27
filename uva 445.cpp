#include<stdio.h>
#include<string.h>

int main()
{
    char maze;
    int len,i,j,t=0;
    while(scanf("%c",&maze)!=EOF)
    {
        if(maze>='0'&&maze<='9')
        {
            t+=(maze-'0');
        }
        else if((maze>='A'&&maze<='Z')||maze=='*')
        {
            for(j=0; j<t; j++)
            {
                printf("%c",maze);
            }
            t=0;
        }
        else if(maze=='b')
        {
            for(j=0; j<t; j++)
            {
                printf(" ");
            }
            t=0;
        }
        else if(maze=='!')
        {
            printf("\n");
        }
        else
        {
            printf("%c",maze);
        }
    }
    return 0;
}

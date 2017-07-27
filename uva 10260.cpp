#include<stdio.h>

int main()
{
    char ch[21];
    int i,a=0;
    while(scanf("%s",ch)==1)
    {
        a=0;
        for(i=0; ch[i]; i++)
        {
            if((ch[i]=='B'|| ch[i]=='F'||ch[i]=='P'||ch[i]=='V')&&a!=1)
            {
                printf("1");
                a=1;
            }
            else if((ch[i]=='C'||ch[i]=='G'||ch[i]=='J'||ch[i]=='K'||ch[i]=='Q'||ch[i]=='S'||
                     ch[i]=='X'||ch[i]=='Z')&&a!=2)
            {
                printf("2");
                a=2;
            }
            else if((ch[i]=='D'||ch[i]=='T')&&a!=3)
            {
                printf("3");
                a=3;
            }
            else if((ch[i]=='L')&&a!=4)
            {
                printf("4");
                a=4;
            }
            else if((ch[i]=='M'||ch[i]=='N')&&a!=5)
            {
                printf("5");
                a=5;
            }
            else if((ch[i]=='R')&&a!=6)
            {
                printf("6");
                a=6;
            }
            else if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='H'
                    ||ch[i]=='W'||ch[i]=='Y')
            {
                a=0;
            }
        }
        printf("\n");
    }

    return 0;
}

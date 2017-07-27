#include<stdio.h>
#include<string.h>

char fibo[1001][220];

int add(char fib[],char f1[],char f2[])
{
    int i,a,b,c=0;
    for(i=0; f1[i]||f2[i]; i++)
    {
        a=(f1[i]?f1[i]-48:0);
        b=(f2[i]?f2[i]-48:0);
        fib[i]=(a+b+c)%10+48;
        c=(a+b+c)/10;
    }
    if(c)
        fib[i]=c+48;
}
int main()
{
    int n,i=0,j,len;
    strcpy(fibo[0],"1");
    strcpy(fibo[1],"2");
    strcpy(fibo[2],"3");
    for(i=3;i<1001;i++)
    {
        add(fibo[i],fibo[i-1],fibo[i-2]);
    }
    while(scanf("%d",&n)==1)
    {
        len=strlen(fibo[n]);
        for(j=len-1; j>=0; j--)
        {
            printf("%c",fibo[n][j]);
        }
        printf("\n");
    }

    return 0;
}


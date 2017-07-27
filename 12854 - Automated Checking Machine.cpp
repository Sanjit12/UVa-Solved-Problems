#include<cstdio>
#include<cstring>
int in()
{
    int a=0;
    char ch;
    while((ch=getchar()))
    {
        if(ch=='\n'||ch==' ')
            break;
        a=a*10+(ch-'0');
    }
    return a;
}

int main()
{
    int a[11],f;
    while(scanf("%d ",&a[0])!=EOF)
    {
        f=0;
        for(int i=1;i<10;i++)
        {
            a[i]=in();
        }
        for(int i=0;i<5;i++)
        {
            if(a[i]==a[i+5])
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            printf("N\n");
        }
        else
        {
            printf("Y\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char b[100000],a[100000];
    long i,j,p=0,len;
    while(gets(b)!=NULL)
    {
        len=strlen(b);
        for(i=0;i<len+1;i++)
        {
            if(b[i]==' '||b[i]=='\0')
            {
                a[p]='\0';
                for(j=p-1;j>=0;j--)
                      printf("%c",a[j]);
                if(b[i]==' ')
                   printf(" ");
                p=0;
            }
            else
            {
                a[p++]=b[i];
            }
        }
        printf("\n");
    }
    return 0;
}
            
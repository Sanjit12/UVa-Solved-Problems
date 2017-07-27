#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char s1[1001],s2[1001],s3[1001];
    int i,j,n,l1,l2,k;
    while((gets(s1)&&gets(s2))!=NULL)
    {
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0,k=0; s2[i]; i++)
        {
            for(j=0; s1[j]; j++)
            {
                if(s2[i]==s1[j])
                {
                    s3[k++]=s2[i];
                    s1[j]='*';
                    s2[i]='*';
                    break;
                }
            }
        }

        sort(s3,s3+k);
        for(i=0; i<k; i++)
        {
            printf("%c",s3[i]);
        }
        printf("\n");
    }
    return 0;
}

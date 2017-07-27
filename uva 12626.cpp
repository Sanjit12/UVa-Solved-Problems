#include<stdio.h>
int main()
{
    int arr[7],min;
    long n,i;
    char ch[610];
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%s",ch);
        for(i=0;i<6;i++)
            arr[i]=0;
        for(i=0;ch[i];i++)
        {
            if(ch[i]=='A')
                arr[0]++;
            else if(ch[i]=='G')
            {
                arr[1]++;
            }
            else if(ch[i]=='I')
            {
                arr[2]++;
            }
            else if(ch[i]=='M')
            {
                arr[3]++;
            }
            else if(ch[i]=='R')
            {
                arr[4]++;
            }
            else if(ch[i]=='T')
            {
                arr[5]++;
            }
        }
        arr[0]/=3;
        arr[4]/=2;
        min=700;
        for(i=0;i<6;i++)
        {
            min=(arr[i]<min)?arr[i]:min;
        }
        printf("%d\n",min);
    }

    return 0;
}

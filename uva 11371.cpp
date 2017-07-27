#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
    char num[30],num2[30],num3[30],t;
    long long con,con2,var,exe,i,n;
    while(scanf("%lld",&n)==1)
    {
        sprintf(num,"%lld",n);
        sort(num,num+strlen(num));
        strcpy(num2,num);
        reverse(num2,num2+strlen(num2));
        for(i=0;num[i];i++)
        {
            if(num[i]!='0')
            {
                swap(num[0],num[i]);
                break;
            }
        }
        con=atoll(num);
        con2=atoll(num2);
        var=con2-con;
        exe=var/9;
        printf("%lld - %lld = %lld = 9 * %lld\n",con2,con,var,exe);
    }

    return 0;
}

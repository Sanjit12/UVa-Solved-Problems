#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<map>

using namespace std;
int main()
{
    char num[10];
    long n1,n2,res,i,j;
    while(scanf("%s",num)==1)
    {
        map<int,int>ex;
        if(num[0]=='0')
            break;
        printf("Original number was %s\n",num);
        for(i=1;; i++)
        {
            sort(num,num+strlen(num));
            n1 = atol(num);
            reverse(num,num+strlen(num));
            n2= atol(num);
            res = n2 - n1;
            printf("%ld - %ld = %ld\n",n2,n1,res);
            sprintf(num,"%ld",res);
            if(ex[res]==1)
            {
                break;
            }
            ex[res]=1;
        }
        printf("Chain length %ld\n\n",i);
    }

    return 0;
}

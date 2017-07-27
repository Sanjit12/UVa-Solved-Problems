#include<bits/stdc++.h>
using namespace std;

char num[1000005],fs[10];

int main()
{
    while(gets(num))
    {
        if(strcmp(num,"END")==0)
            break;
        int n=1;
        sprintf(fs,"%d",strlen(num));
        while(strcmp(fs,num))
        {
            strcpy(num,fs);
            sprintf(fs,"%d",strlen(fs));
            n++;
        }
        printf("%d\n",n);
    }
    return 0;
}

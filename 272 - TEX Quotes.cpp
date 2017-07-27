#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100000];
    int f=0;
    while(gets(ch)!=NULL)
    {
        for(int i=0;ch[i];i++)
        {
            if(ch[i]=='\"'&&f%2==0)
            {
                printf("``");
                f++;
            }
            else if(ch[i]=='\"'&&f%2==1)
            {
                printf("''");
                f++;
            }
            else
            {
                printf("%c",ch[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

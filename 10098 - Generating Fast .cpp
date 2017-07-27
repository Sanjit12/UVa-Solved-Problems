#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[11];
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%s",ch);
        sort(ch,ch+strlen(ch));
        char c[11];
        strcpy(c,ch);
        printf("%s\n",ch);
        next_permutation(ch,ch+strlen(ch));
        while(strcmp(c,ch))
        {
            printf("%s\n",ch);
            next_permutation(ch,ch+strlen(ch));
        }
        printf("\n");
    }
    return 0;
}

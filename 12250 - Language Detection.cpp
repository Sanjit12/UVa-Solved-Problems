#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[50];
    int cas=1;
    while(scanf("%s",ch)==1)
    {
        if(!strcmp(ch,"#"))
            break;
        printf("Case %d: ",cas++);
        if(!strcmp(ch,"ZDRAVSTVUJTE"))
        {
            printf("RUSSIAN\n");
        }
        else if(!strcmp(ch,"CIAO"))
        {
            printf("ITALIAN\n");
        }
        else if(!strcmp(ch,"BONJOUR"))
        {
            printf("FRENCH\n");
        }
        else if(!strcmp(ch,"HALLO"))
        {
            printf("GERMAN\n");
        }
        else if(!strcmp(ch,"HOLA"))
        {
            printf("SPANISH\n");
        }
        else if(!strcmp(ch,"HELLO"))
        {
            printf("ENGLISH\n");
        }
        else
            printf("UNKNOWN\n");
    }

    return 0;
}

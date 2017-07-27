#include<stdio.h>
int main()
{
    long a,b,c;
    scanf("%ld",&c);
    while(c--)
    {
        scanf("%ld%ld",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
    }
    return 0;
}

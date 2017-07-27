#include<bits/stdc++.h>
int main()
{
    long a,b,c,n,m,ans,rem;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld",&m);
        ans=((((((m*567)/9)+7492)*235)/47)-498)/10;
        rem=ans%10;
        printf("%ld\n",abs(rem));
    }
    return 0;
}

#include<stdio.h>
long cnt;
long bin(long n)
{
    if(n>1)
    bin(n/2);
    printf("%ld",n%2);
    if(n%2)
        cnt++;
}
int main()
{
    cnt=0;
    long a,b;
    while(scanf("%ld",&a)==1&&a)
    {
        cnt=0;
        printf("The parity of ");
        bin(a);
        printf(" is %ld (mod 2).\n",cnt);
    }
    return 0;

}

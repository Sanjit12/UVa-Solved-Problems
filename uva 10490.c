#include<stdio.h>
int main()
{
    int prime[32]={0};
    prime[2]=1;
    prime[3]=1;
    prime[5]=1;
    prime[7]=1;
    prime[11]=1;
    prime[13]=1;
    prime[17]=1;
    prime[19]=1;
    prime[23]=1;
    prime[29]=1;
    prime[31]=1;
    unsigned long long per[32]={0};
    per[2]=6;
    per[3]=28;
    per[5]=496;
    per[7]=8128;
    per[13]=33550336;
    per[17]=8589869056;
    per[19]=137438691328;
    per[31]=2305843008139952128;
    int n;
    while (scanf("%ld", &n) == 1&&n)
    {
        if (prime[n])
        {
            if (per[n])
            {
                printf("Perfect: %lld!\n",per[n]);
            }
            else
            {
                printf("Given number is prime. But, NO perfect number is available.\n");
            }
        }
        else
        {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }
    return 0;
}

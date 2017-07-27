#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 10000000
char p[MAX];
int sieve()
{
    long r, i, j;
    memset(p, 1, sizeof(p));
    p[0] = 0;
    r = sqrt(MAX) + 1;
    for (i = 3; i < r; i += 2)
    {
        if (p[(i - 1) / 2])
        {
            j = 3 * i;
            while (j <MAX)
            {
                p[(j - 1) / 2] = 0;
                j = j + i + i;
            }
        }
    }
}
int prime(long n)
{
    if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    else
        return p[(n - 1) / 2];
}
int main()
{
    sieve();
    long a, b, c, n;
    while (scanf("%ld", &n)!=EOF)
    {
        if (n < 8)
            printf("Impossible.\n");
        else
        {
            a = 2;
            b = 2 + n % 2;
            n -= (a + b);
            if (n == 4)
                c = 2;
            else
                for (c = 3; 1; c += 2)
                    if (prime(c)&&prime(n - c))
                        break;
            printf("%ld %ld %ld %ld\n", a, b, c, n - c);
        }
    }
    return 0;
}

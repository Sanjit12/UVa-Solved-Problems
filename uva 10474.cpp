#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{
    long  m[10010],n, q, i, j, e,h, l, t, a, s = 1,f=0;
    while (scanf("%d%d", &n, &q) == 2)
    {
        if(n==0&&q==0)
            break;

        for (i = 0; i < n; i++)
            scanf("%ld", &m[i]);
        sort(m,m+n);

        printf("CASE# %ld:\n", s);

        for (i = 0; i < q; i++)
        {
            scanf("%ld", &e);
            for(j = 0,f=0 ; j < n ; j ++)
            {
                if(m[j] == e)
                {
                    f=1;
                    break ;
                }

            }
            if(f==1)
                printf("%d found at %d\n",e,j+1);
            else
                printf("%d not found\n",e) ;
        }
        s++;
    }

    return 0;
}

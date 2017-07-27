#include<stdio.h>
int main()
{
    long b[3][3], i, j, k, m[6],min=2000000000,a;
    while (scanf("%ld", &b[0][0]) == 1)
    {
        j = 1;
        for (i = 0; i < 3; i++, j = 0)
        {
            for (; j < 3; j++)
                scanf("%ld", &b[i][j]);
        }
        m[0]=b[0][1]+b[0][2]+b[1][0]+b[1][1]+b[2][0]+b[2][2];
        m[1]=b[0][1]+b[0][2]+b[1][0]+b[1][2]+b[2][0]+b[2][1];
        m[2]=b[0][0]+b[0][1]+b[1][1]+b[1][2]+b[2][0]+b[2][2];
        m[3]=b[0][0]+b[0][1]+b[1][0]+b[1][2]+b[2][1]+b[2][2];
        m[4]=b[0][0]+b[0][2]+b[1][1]+b[1][2]+b[2][0]+b[2][1];
        m[5]=b[0][0]+b[0][2]+b[1][0]+b[1][1]+b[2][1]+b[2][2];

        for(i=0; i<6; i++)
        {
            if(m[i]<min)
            {
                min=m[i];
                a=i;
            }
        }
        switch(a)
        {
        case 0:
            printf("BCG %ld\n",min);
            break;
        case 1:
            printf("BGC %ld\n",min);
            break;
        case 2:
            printf("CBG %ld\n",min);
            break;
        case 3:
            printf("CGB %ld\n",min);
            break;
        case 4:
            printf("GBC %ld\n",min);
            break;
        case 5:
            printf("GCB %ld\n",min);
            break;
        }
        min=2000000000;
    }
    return 0;
}

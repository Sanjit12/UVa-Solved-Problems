#include<stdio.h>
#include<math.h>

#define root(x) (sqrt(x))
#define sq(x) ((x)*(x))

int main()
{
    int n;
    float x,y,r,dis;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%f%f%f",&x,&y,&r);
        dis=root(sq(x-0)+sq(y-0));
        printf("%.2f %.2f\n",r-dis,r+dis);
    }
    return 0;
}


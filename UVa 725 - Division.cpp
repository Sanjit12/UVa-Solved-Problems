#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,f=0,k;
    while(cin>>n&&n)
    {
        if(f)
        cout<<endl;
        f=1;
        k=1;
        for(int i=1234; i<=(98765/n); i++)
        {
            int a=i,b=i*n,t;
            int d=(i<10000);
            t=a;
            while(t)
            {
                int p=t%10;
                d|=(1<<p);
                t/=10;
            }
            t=b;
            while(t)
            {
                int p=t%10;
                d|=(1<<p);
                t/=10;
            }
            if(d==(1<<10)-1)
            {
                printf("%0.5d / %0.5d = %d\n", b, a, n);
                k=0;
            }
        }
        if(k)
            cout<<"There are no solutions for "<<n<<"."<<endl;
    }
    return 0;
}

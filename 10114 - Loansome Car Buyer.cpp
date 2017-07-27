#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,dep,mon;
    double dp,loan,rate;
    double ar[101];
    while(scanf("%d%lf%lf%d",&m,&dp,&loan,&dep)==4)
    {
        if(m<0) break;
        memset(ar,0,sizeof ar);
        for(int i=0;i<dep;i++)
        {
            scanf("%d %lf",&mon,&rate);
            ar[mon]=rate;
        }
        double rate=ar[0];
        double carval=((loan+dp)*(1-rate));
        double mpay=loan/m;
        int month=0;

        while(loan>carval)
        {
            ++month;
            loan-=mpay;
            if(ar[month]!=0)
            {
                rate=ar[month];
            }
            carval=carval*(1-rate);
        }
        cout<<month;
        if(month==1)
        {
            cout<< " month\n";
        }
        else
        {
            cout<< " months\n";
        }
    }
    return 0;
}

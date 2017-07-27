#include<bits/stdc++.h>
using namespace std;

int pre(char a, char b)
{
    if ((a == '*' || a == '/') && (b == '+' || b == '-'))
        return 1;
    if((a == '*' || a == '/') && (b == '*' || b == '/'))
        return 1;
    if((a == '+' || a == '-') && (b == '+' || b == '-'))
        return 1;
    return 0;
}


int main()
{
    int n;
    stack<char> st;
    scanf("%d",&n);
    getchar();
    getchar();
    while(n--)
    {
        string ch,ex="";
        while(getline(cin,ch))
        {
            if(ch.length()==0)
                break;
            ex+=ch;
        }
        for(int i=0; i<ex.length(); i++)
        {
            if(ex[i]>='0'&&ex[i]<='9')
            {
                cout<<ex[i];
            }
            else if(ex[i]==')')
            {
                while(st.top()!='(')
                {
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while(!st.empty()&&(pre(st.top(),ex[i])))
                {
                    cout<<st.top();
                    st.pop();
                }
                st.push(ex[i]);
            }
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        printf("\n");
        if(n)
            printf("\n");
    }
    return 0;
}

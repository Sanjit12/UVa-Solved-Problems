#include<stdio.h>
int main()
{
    long long t,i=1,a,n=0;
    char ch;
    scanf("%lld",&t);
    getchar();
    while(i<=t)
    {
        while((ch=getchar())!='\n')
        {
            switch(ch)
            {
                case 'a':
                case 'd':
                case 'g':
                case 'j':
                case 'm':
                case 'p':
                case 't':
                case 'w':
                case ' ':n+=1;
                    break;

                case 'b':
                case 'e':
                case 'h':
                case 'k':
                case 'n':
                case 'q':
                case 'u':
                case 'x':n+=2;
                    break;

                case 'c':
                case 'f':
                case 'i':
                case 'l':
                case 'o':
                case 'r':
                case 'v':
                case 'y':n+=3;
                    break;

                case 's':
                case 'z':n+=4;
                    break;
            }
        }
        printf("Case #%lld: %lld\n",i,n);
        n=0;
        i++;
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int chmir(char a, char b)
{
    if (a == 'A' && b == 'A')
        return 1;
    if (a == 'H' && b == 'H')
        return 1;
    if (a == 'I' && b == 'I')
        return 1;
    if (a == 'M' && b == 'M')
        return 1;
    if (a == 'O' && b == 'O')
        return 1;
    if (a == 'T' && b == 'T')
        return 1;
    if (a == 'U' && b == 'U')
        return 1;
    if (a == 'V' && b == 'V')
        return 1;
    if (a == 'W' && b == 'W')
        return 1;
    if (a == 'X' && b == 'X')
        return 1;
    if (a == 'Y' && b == 'Y')
        return 1;
    if (a == '1' && b == '1')
        return 1;
    if (a == '8' && b == '8')
        return 1;
    if ((a == 'E' && b == '3') || (a == '3' && b == 'E'))
        return 1;
    if ((a == 'J' && b == 'L') || (a == 'L' && b == 'J'))
        return 1;
    if ((a == 'Z' && b == '5') || (a == '5' && b == 'Z'))
        return 1;
    if ((a == 'S' && b == '2') || (a == '2' && b == 'S'))
        return 1;

    return 0;
}

int main()
{
    char a[21];
    int i, j, len, p = 0, m = 0;
    while (scanf("%s", a) != EOF)
    {
        len = strlen(a);
        j =( len+1)/2;
        for (i = 0,len--; i <= len; i++, len--)
        {
            if (a[i] == a[len])
            {
                p++;
                m += chmir(a[i], a[len]);
            }
            else
            {
                m += chmir(a[i], a[len]);
            }
        }
        if (p == j&&m==j)
        {
            printf("%s -- is a mirrored palindrome.\n\n", a);
        }
        else if(p==j)
            printf("%s -- is a regular palindrome.\n\n",a);
        else if(m==j)
            printf("%s -- is a mirrored string.\n\n",a);
        else
            printf("%s -- is not a palindrome.\n\n",a);
        p=0;
        m=0;
    }
    return 0;
}

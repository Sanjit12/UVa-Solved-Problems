#include<cstdio>

char c, s;

bool is_alphabetic(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool is_vowel(char c)
{
    return c == 'a' || c == 'A' ||
           c == 'e' || c == 'E' ||
           c == 'i' || c == 'I' ||
           c == 'o' || c == 'O' ||
           c == 'u' || c == 'U';
}

int main()
{
    while((c = getchar()) != EOF)
    {
        if(is_alphabetic(c))
        {
            s = c;
            if(!is_vowel(c))
            {
                while(is_alphabetic((c = getchar())))
                    printf("%c", c);
                if(c != '\n')
                    printf("%cay", s);
            }
            else
            {
                printf("%c", c);
                while(is_alphabetic((c = getchar())))
                    printf("%c", c);
                if(c != '\n')
                    printf("ay");
            }
        }
        printf("%c", c);
    }
}

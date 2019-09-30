#include <stdio.h>

char in[10001];
char s[2];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", in);
        scanf("%s", s);

        int count = 0;

        for (int i = 0; in[i] != '\0'; i++)
        {
            if (in[i] == s[0])
                count++;
        }

        if (count != 0)
            printf("Occurrence of \'%c\' in \'%s\' = %d\n", s[0], in, count);
        else
            printf("\'%c\' is not present\n", s[0]);
    }

    return 0;
}

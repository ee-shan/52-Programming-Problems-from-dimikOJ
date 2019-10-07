#include <stdio.h>
#include <string.h>

char str[1001];
int count[26];

void pre()
{
    for (int i = 0; i < 26; i++)
        count[i] = 0;
}

int main()
{
    int T;
    scanf("%d", &T);

    for(int i = 1 ; i <= T ; i++)
    {
        scanf(" %[^\n]", str);

        pre();

        int len = strlen(str);

        for (int i = 0; i < len; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                count[str[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
                printf("%c = %d\n", 'a' + i, count[i]);
        }

        if( i == T)
            break;

        printf("\n");
    }

    return 0;
}

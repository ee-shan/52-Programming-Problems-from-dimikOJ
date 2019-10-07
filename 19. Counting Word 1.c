#include <stdio.h>

char s[10001];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", s);

		int count = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ' ')
                count++;
        }

        printf("Count = %d\n", count + 1);
    }

    return 0;
}
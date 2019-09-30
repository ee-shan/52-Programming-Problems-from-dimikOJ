#include <stdio.h>

char s[1001];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int count = 0;

        scanf(" %[^\n]", s);

        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                count++;
            }
        }

        printf("Number of vowels = %d\n", count);
    }

    return 0;
}
#include <stdio.h>

char s[101];
char vowel[101];
char consonant[101];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", s);

        int j = 0, k = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    vowel[j] = s[i];
                    j++;
                }

                else if (s[i] != ' ' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
                {
                    consonant[k] = s[i];
                    k++;
                }
            }
        }

        vowel[j] = '\0';
        consonant[k] = '\0';

        printf("%s\n%s\n", vowel, consonant);
    }

    return 0;
}
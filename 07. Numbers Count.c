#include <stdio.h>

char in[10000001];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf(" %[^\n]", in);

        int count = 1;

        for (int i = 0; in[i] != '\0'; )
        {
            if (in[i] == ' ')
            {
                while (in[i] == ' ')
                    i++;

                count += 1;
            }

            else
                i++;
        }

        printf("%d\n", count);
    }

    return 0;
}

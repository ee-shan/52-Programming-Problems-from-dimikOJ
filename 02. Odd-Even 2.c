#include <stdio.h>
#include <string.h>

char N[101];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", N);

        int length = strlen(N);
        int last_char = N[length - 1];
        int last_num = last_char - '0';

        if (last_num % 2 == 0)
        {
            printf("even\n");
        }

        else
        {
            printf("odd\n");
        }
    }

    return 0;
}

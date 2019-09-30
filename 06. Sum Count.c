#include <stdio.h>

char in[5];

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", in);

        printf("Sum = %d\n", (in[0] - '0') + (in[4] - '0'));
    }

    return 0;
}

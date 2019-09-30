#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        if (N % 2 == 0)
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

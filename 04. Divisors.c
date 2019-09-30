#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);;

    int cse = 1;

    while (T--)
    {
        int n;
        scanf("%d", &n);

        printf("Case %d:", cse);
        cse++;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                printf(" %d", i);
        }

        printf("\n");
    }

    return 0;
}
